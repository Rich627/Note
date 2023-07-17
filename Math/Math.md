## Statistics

P-value < 0.001 Strong
P-value < 0.05 Moderate
P-value < 0.1 Weak
P-value >0.1 No realtion

```Python
from scipy.stats import pearsonr

corr, p_value = pearsonr(df['x'], df['x'])
```

## Chi-square Test

### $\sum_{i=1}^n\frac{(O_i-E_i)^2}{E_i}$~$\chi^2$

$O_i$ is observe value
$E_i$ is except value
$df = n-1$ is degree of freedom
查表看自由度$\alpha$值通常是0.05 如果$\chi^2$ > 查出來的值那就拒絕$H_0$

```Python
from sci.py
scipy.stats.chi2()
```

### Anderson-Darling test(安德森統計)
用以檢測某數據是否符合xx分佈
  在95%信心水準下 統計量>臨界值 就拒絕
  
```Python
from scipy.stats import anderson
#dist參數 norm(常態), expon(指數)
result = anderson(x, dist='x')
if result.statistic > result.critical_values[2]: print('reject') 

```  

## Regresson Metrices

### MSE/SSD
$MSE(Mean\ Squared\ Error) =\frac{\sum(y_i-\hat{y})^2}{n}$
$RMSE=\sqrt{MSE}$

```Python
from sklearn.metrics import mean_squared_error

perdict = model.predict(X)
mean_squared_error(Y, perdict)
```

### MAE/SAD

$MAE = \frac{1}{n}\sum \mid y_i-\hat{y}\mid$
```Python
from sklearn import mean_absloute_error

perdict = model.predict(X)
mean_absloute_error(Y, perdict)
```

### Determinet Coefficient
$R^2= 1-\sum\frac{(y_i-\hat{y})^2}{(y_i-\bar{y})^2}$
```Python
from sklear.linear_model import LinearRegression

lm = LinearRegression()
R_2 = lm.score(X, y)
```

## Classification Metrices

Confusion\ Martix
|                 | Actual True         | Actual False        |
| --------------- | ------------------- | ------------------- |
| Predicted Ture  | True Positive (TP)  | False Positive (FP)type I error |
| Predicted False | False Negative (FN) type II error| True Negative (TN)  |

$Accuracy = \frac{TP+TN}{ALL}$
$Percision= \frac{TP}{TP+FP}$
$Recall = \frac{TP}{TP+FN}$
$F1\ Score = \frac{2*Accuary*Percisoin}{Accuary+Percisoin}$
$Sensitivity=\frac{TP}{TP+FN}$
$Spencificity=\frac{TN}{TN+FP}$
##### 繪製AUC
```Python
from sklearn.metrics import confusion_matrix, f1_score, accuracy_score, auc, recall_score, roc_curve, roc_auc_score

accuracy_knn = accuracy_score(y_test, pred_knn)

recall_score_knn = recall_score(y_test, pred_knn)

f1_score_knn = f1_score(y_test, pred_knn)

cm = confusion_matrix(y_test, pred_knn)

import seaborn as sns

sns.heatmap(cm, annot=True, cmap='Blues')

plt.plot(fpr, tpr, label='auc = {0}'.format(auc))

plt.axis('square')

plt.xlabel('False Positive Rate')

plt.ylabel('True Positive Rate')

  

plt.legend()

plt.xlim([-0.1, 1.1])

plt.ylim([-0.1, 1.1])

  

plt.title('ROC Curve')
```

###### 資訊量函數
$h(y)=ln(\frac {1}{p(y)})=-\frac{1}{ln(y)}$

###### Entropy
$H(Y)=E[h(Y)]=-\sum_{k=1}^Kp_kln(p_k)$

###### 資訊增益Information Gain
$G(Y|X) =H(Y) -H(Y|X)$
$H(Y|X)=-\sum_{j=1}^np(x_j)H(Y|x_j)$

###### 資訊增益比Information Gain Ratio
$G_R(Y|X)= \frac{G(Y|X)}{H(Y)}=1-\frac{H(Y|X)}{H(Y)}$

###### Gini Index
$Gini(p)=\sum_{k=1}^N p_k(1-p_k)$

#### Logistic Regression
$z =w^T x$
$\phi (z) = \frac{1}{1 + e^{-z}}, where \ 0<=y<=1$

### Multiple Logistic Regresson(MLR)
$P(y) = \frac{1}{e^{-1(bo+b1x1+b2x2+...+bnxn)}}$
$logit=bo+b1x1+b2x2+...+bnxn$
$P=\frac{1}{1+e^{-logit}}(risk)$
P就是sidmoid(logit)
$logit =\frac{p}{1-p} = log(odds)$

## Binary Cross-entropy
### $J(w, b) =\frac{1}{m}\sum_{i=1}^{m}[y^{(i)}\log(\hat{y}^{(i)})+(1-y^{(i)})\log(1-\hat{y}^{(i)})]$
```Python
#tensorflow 
model.compile(optimizer='x', loss=tf.keras.losses.BinaryCrossentropy())
#sklearn
from sklearn.mertices import log_loss
loss = log_loss(y_true, y_pred)
```

### Categorical Cross-entropy
適用於多分類
$\cal L =-\frac{1}{N}\sum_{i=1}^{N}\sum_{j=1}^{C}y_{ij}\log(p_{ij})$
$N$ 是樣本數量
$C$ 是類別數
$y_{ij}$ 是第 $i$ 個樣本的真實標籤是否屬於第 $j$ 個類別的二元指示變量
$p_{ij}$ 表示地i個樣本分類為第 $j$ 個類別的概率
```Python
loss = tf.reduce_mean(tf.keras.losses.categorical_crossentropy(y_true, y_pred))
```
### Softmax Regresson Loss Funcion
$\cal L(y,\hat y) = -\sum y_i log\hat y_j$

### L2 Regularization(Weight Decay)

$J(\theta)=\frac{1}{m}\sum_{i=1}^{m}\cal L(\hat{y}^{(i)},y^{(i)})+\frac{\lambda}{2}\sum_{j=1}^{n}w_j^2$

###### Dropout 
隨機關閉一些node，以減少overfitting問題，從而實現val error下降


###### Activation Function
Sigmoid 適用二元分類
$\sigma(x)=\frac{1}{1+e^{-x}}, where \ 0<y<1$

tanh可以用多分類或回歸
$\sigma(x)=\frac{e^x-e^{-x}}{e^x+e^{-x}}, where \ -1<y<1$

Relu
$f(x)=max(0,x)$

###### Mini-Batch gradient descent
將資料分一批一批，以加速梯度下降算法
forward
loss env
backward
$w^l=w^l-\alpha\ dW^l$
$b^l=b^l-\alpha\ db^l$
###### Forward Propagation
$z^l = W^lX+b^l$
$a^l = g^l(z^l)$

###### Backward Propagation
## Clasturing Metrices
###### 輪廓係數
$S_i =  \frac{b_i-a_i}{max(a_i,b_i)}, where \ -1≤S_i≤1$
$a_i$代表同一群中同一群中各個點的平均距離
$b_i$代表不同分類下兩點的平均距離
$S_i$接近1是好的

```Python
from sklean.mertices import silhouette_score

silhouette_score(x_test, y_pred)
```

###### Perceptron Learning Rule
只能處理linear separable的問題
$\eta$:learning rate
t:target value
o:$W^T X$
$\Delta W=\eta(t-o)X_i$
$W_i=W_i + \Delta W$
###### Multilayer perceptron Classfier(MLP, ANN)
可以處理非線性關係的data，會有多個neuron


###### 對角化(Decorrelated)
$quadratic function = f(X) =B^TX+ \frac{1}{2}X^T[A]X$
ex.$f(x1, x2) = 6x_1^2-6x_1x_2+2x_2^2-x_1-2x_2$
$X =\begin{Bmatrix} x_1\\x_2 \end{Bmatrix}$
$B =\begin{Bmatrix} \frac{\partial f}{\partial x_1}\\ \cdots\\  \frac{\partial f}{\partial x_n}\end{Bmatrix}=\begin{Bmatrix} -1\\-2 \end{Bmatrix}$
$[A] =\begin{bmatrix}\frac{\partial^2 f}{\partial x_1^2}\ .. \ \frac{\partial^2 f}{\partial x_1 \partial x_n}\ \\ \frac {\partial^2 f}{\partial x_n \partial x_1}\ ..\ \frac {\partial^2 f}{\partial x_n^2}{}\end{bmatrix}=\begin{bmatrix} 12 & -6\\-6 & 4\end{bmatrix}$
To slove $[[A]−\lambda_i[I]]u_i =0$
$\begin{bmatrix}{12-\lambda_i} \ \  -6 \\ -6 \ \ \ \ \ \  {4-\lambda_i} \end{bmatrix}=\lambda_i^2-16\lambda_i+12=0$
$\lambda_i$ is called engenvalue
$u_i$ is eigenvector


##### Gradient Descent(梯度下降)
1. Initial values of x
2. Compute the search direction g from x, where g is called the directional derivative
3. Determine a step size α, $\alpha$ is hyperparmater.
4. Update the values of $x=x-\alpha g$
5. Repeat 1~4 until $\cal f$ converges

###### Steepest Descent Method(最速下降法)
1. Start with an arbitrary initial point $X_1$ . Set the iteration number as $i=1$.
2.  Find the search direction $S_i$ as $S_i =−\nabla f_i =−\nabla f(X_i)$
3.  Determine the optimal step length $\lambda^*$in the direction $S_i$ and set
$X_{i+1} =X_i +\lambda^*_i S_i=X_i−\lambda^*_i\nabla f_i$
4.  Test the new point, $X_{i+1}$ , for optimality. If $X_{i+1}$ is optimum, stop the process. Otherwise go to step 5.
5.  Set the new iteration number $i=i+1$ and go to step 2.

###### Fletcher-Reeves Method(共軛梯度法)
1.Start with an arbitrary initial point $X1$.
2.Set the first search direction $S_1 = -\nabla f (X_1) = -\nabla f_1$
3.Find the point $X2$ according to the relation$X_2 = X_1 + \lambda^*_1 S_1$
4.Find $\nabla f = \nabla f(X_i)$,and set $S_i = -\nabla f_i +\frac{|\nabla f_i|^2}{|\nabla f_{i-1}|^2}S_{i-1}$
5Compute the optimum step length $\lambda_i^*$ in the direction $S_i$, and find the new point $X_{i+1} =X_i+\lambda_i^*S_i$
6.Test for the optimality of the point $X_{i+1}$. If $X_{i+1}$optimum, stop the process.
Otherwise set the value of $i=i+1$ and go to step 4.




