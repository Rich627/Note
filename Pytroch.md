get tensor back as python int
```python
vecotr.item()
```

create a random tensor
```python
#pytroch中channels是在前面
random_tensor = torch.rand(size=(x, x, x))
```

creating a range of tensors
```python
one_to_ten = torch.arange(start=1, end=11, step=1)
```

float32 tensor
```python
float_32_tensor = torch.tensor([3.0, 6.0, 9.0],

dtype=None, # what datatype is the tensor (e.g. float32 or float16)

device=None, # What device is your tensor on

requires_grad=False) # whether or not to track gradients with this tensors operations
```

Find the position in tensor that has the maximum value
```python
x.argmax()
```

Permute the original tensor to rearrange the axis (or dim) order
```python
#input:(224, 224, 3)
#output:(3, 224, 224)
x_permuted = x_original.permute(2, 0, 1)
```

Coverting from numpy
```python
array = np.arange(1, 9)
tensor = torch.from_numpy(array)
```

Set the random seed
```python
torch.manual(42)
```

Putting tensors on gpu
```python
tensor.to(device)
```

增加維度
```python
torch.unsqueeze(dim=1)
```

LinearRegression model
```python
class LinearRegressionModel(nn.Module):
	def __init__(self):
	super.weights = nn.Parameter(torch.randn(1,
							requires_grad=True,								detype=torch.float))
	super.bias = nn.Parameter(torch.randn(1,
							requires_grad=True,								detype=torch.float))
	def forward(self, x):
	return self.weights * x +self.bias
```

check model's parameters
```python
model.state_dict()
```

save model
```python
from pathlib import Path


MODEL_PATH = Path("models")
MODEL_PATH.mkdir(parents=True, exist_ok=True)

MODEL_NAME = "01_pytorch_workflow_model_0.pth"
MODEL_SAVE_PATH = MODEL_PATH / MODEL_NAME

print(f"Saving model to: {MODEL_SAVE_PATH}")
torch.save(obj=model_0.state_dict(),
f=MODEL_SAVE_PATH)
```

train step
```python
def train_step(model: torch.nn.Module,

data_loader: torch.utils.data.DataLoader,

loss_fn: torch.nn.Module,

optimizer: torch.optim.Optimizer,

accuracy_fn,

device: torch.device = device):

"""Performs a training with model trying to learn on data_loader."""

train_loss, train_acc = 0, 0

  

# Put model into training mode

model.train()

  

# Add a loop to loop through the training batches

for batch, (X, y) in enumerate(data_loader):

# Put data on target device

X, y = X.to(device), y.to(device)

  

# 1. Forward pass (outputs the raw logits from the model)

y_pred = model(X)

# 2. Calculate loss and accuracy (per batch)

loss = loss_fn(y_pred, y)

train_loss += loss # accumulate train loss

train_acc += accuracy_fn(y_true=y,

y_pred=y_pred.argmax(dim=1)) # go from logits -> prediction labels

# 3. Optimizer zero grad

optimizer.zero_grad()

# 4. Loss backward

loss.backward()

# 5. Optimizer step (update the model's parameters once *per batch*)

optimizer.step()

# Divide total train loss and acc by length of train dataloader

train_loss /= len(data_loader)

train_acc /= len(data_loader)

print(f"Train loss: {train_loss:.5f} | Train acc: {train_acc:.2f}%")
```

test_step
```python
def test_step(model: torch.nn.Module,

data_loader: torch.utils.data.DataLoader,

loss_fn: torch.nn.Module,

accuracy_fn,

device: torch.device = device):

"""Performs a testing loop step on model going over data_loader."""

test_loss, test_acc = 0, 0

# Put the model in eval mode

model.eval()

  

# Turn on inference mode context manager

with torch.inference_mode():

for X, y in data_loader:

# Send the data to the target device

X, y = X.to(device), y.to(device)

  

# 1. Forward pass (outputs raw logits)

test_pred = model(X)

  

# 2. Calculuate the loss/acc

test_loss += loss_fn(test_pred, y)

test_acc += accuracy_fn(y_true=y,

y_pred=test_pred.argmax(dim=1)) # go from logits -> prediction labels

  

# Adjust metrics and print out

test_loss /= len(data_loader)

test_acc /= len(data_loader)

print(f"Test loss: {test_loss:.5f} | Test acc: {test_acc:.2f}%\n")
```

train function
```python
from tqdm.auto import tqdm

  

# 1. Create a train function that takes in various model parameters + optimizer + dataloaders + loss function

def train(model: torch.nn.Module,

train_dataloader,

test_dataloader,

optimizer,

loss_fn: torch.nn.Module = nn.CrossEntropyLoss(),

epochs: int = 5,

device=device):

# 2. Create empty results dictionary

results = {"train_loss": [],

"train_acc": [],

"test_loss": [],

"test_acc": []}

# 3. Loop through training and testing steps for a number of epochs

for epoch in tqdm(range(epochs)):

train_loss, train_acc = train_step(model=model,

dataloader=train_dataloader,

loss_fn=loss_fn,

optimizer=optimizer,

device=device)

test_loss, test_acc = test_step(model=model,

dataloader=test_dataloader,

loss_fn=loss_fn,

device=device)

# 4. Print out what's happening

print(f"Epoch: {epoch} | Train loss: {train_loss:.4f} | Train acc: {train_acc:.4f} | Test loss: {test_loss:.4f} | Test acc: {test_acc:.4f}")

  

# 5. Update results dictionary

results["train_loss"].append(train_loss)

results["train_acc"].append(train_acc)

results["test_loss"].append(test_loss)

results["test_acc"].append(test_acc)

# 6. Return the filled results at the end of the epochs

return results
```

train model
```python
model_0_results = train(model=model_0,

train_dataloader=train_dataloader_simple,

test_dataloader=test_dataloader_simple,

optimizer=optimizer,

loss_fn=loss_fn,

epochs=NUM_EPOCHS)
```
evaluate model
```python
torch.manual_seed(42)

def eval_model(model: torch.nn.Module,

data_loader: torch.utils.data.DataLoader,

loss_fn: torch.nn.Module,

accuracy_fn,

device=device):

"""Returns a dictionary containing the results of model predicting on data_loader."""

loss, acc = 0, 0

model.eval()

with torch.inference_mode():

for X, y in tqdm(data_loader):

# Make our data device agnostic

X, y = X.to(device), y.to(device)

# Make predictions

y_pred = model(X)

  

# Accumulate the loss and acc values per batch

loss += loss_fn(y_pred, y)

acc += accuracy_fn(y_true=y,

y_pred=y_pred.argmax(dim=1))

  

# Scale loss and acc to find the average loss/acc per batch

loss /= len(data_loader)

acc /= len(data_loader)

  

return {"model_name": model.__class__.__name__, # only works when model was created with a class

"model_loss": loss.item(),

"model_acc": acc}
```

cnn model
```python
# Create a convolutional neural network

class FashionMNISTModelV2(nn.Module):

"""

Model architecture that replicates the TinyVGG

model from CNN explainer website.

"""

def __init__(self, input_shape: int, hidden_units: int, output_shape: int):

super().__init__()

self.conv_block_1 = nn.Sequential(

# Create a conv layer - https://pytorch.org/docs/stable/generated/torch.nn.Conv2d.html

nn.Conv2d(in_channels=input_shape,

out_channels=hidden_units,

kernel_size=3,

stride=1,

padding=1), # values we can set ourselves in our NN's are called hyperparameters

nn.ReLU(),

nn.Conv2d(in_channels=hidden_units,

out_channels=hidden_units,

kernel_size=3,

stride=1,

padding=1),

nn.ReLU(),

nn.MaxPool2d(kernel_size=2)

)

self.conv_block_2 = nn.Sequential(

nn.Conv2d(in_channels=hidden_units,

out_channels=hidden_units,

kernel_size=3,

stride=1,

padding=1),

nn.ReLU(),

nn.Conv2d(in_channels=hidden_units,

out_channels=hidden_units,

kernel_size=3,

stride=1,

padding=1),

nn.ReLU(),

nn.MaxPool2d(kernel_size=2)

)

self.classifier = nn.Sequential(

nn.Flatten(),

nn.Linear(in_features=hidden_units*7*7, # there's a trick to calculating this...

out_features=output_shape)

)

  

def forward(self, x):

x = self.conv_block_1(x)

# print(f"Output shape of conv_block_1: {x.shape}")

x = self.conv_block_2(x)

# print(f"Output shape of conv_block_2: {x.shape}")

x = self.classifier(x)

# print(f"Output shape of classifier: {x.shape}")

return x
```

confusionmartix
```python
from torchmetrics import ConfusionMatrix

from mlxtend.plotting import plot_confusion_matrix

  

# 2. Setup confusion instance and compare predictions to targets

confmat = ConfusionMatrix(num_classes=len(class_names))

confmat_tensor = confmat(preds=y_pred_tensor,

target=test_data.targets)

  

# 3. Plot the confusion matrix

fig, ax = plot_confusion_matrix(

conf_mat=confmat_tensor.numpy(), # matplotlib likes working with numpy

class_names=class_names,

figsize=(10, 7)

)
```

plot loss function
```python
def plot_loss_curves(results: Dict[str, List[float]]):

"""Plots training curves of a results dictionary."""

# Get the loss values of the results dictionary(training and test)

loss = results["train_loss"]

test_loss = results["test_loss"]

  

# Get the accuracy values of the results dictionary (training and test)

accuracy = results["train_acc"]

test_accuracy = results["test_acc"]

  

# Figure out how mnay epochs there were

epochs = range(len(results["train_loss"]))

  

# Setup a plot

plt.figure(figsize=(15, 7))

  

# Plot the loss

plt.subplot(1, 2, 1)

plt.plot(epochs, loss, label="train_loss")

plt.plot(epochs, test_loss, label="test_loss")

plt.title("Loss")

plt.xlabel("Epochs")

plt.legend()

  

# Plot the accuracy

plt.subplot(1, 2, 2)

plt.plot(epochs, accuracy, label="train_accuracy")

plt.plot(epochs, test_accuracy, label="test_accuracy")

plt.title("Accuracy")

plt.xlabel("Epochs")

plt.legend();
```

