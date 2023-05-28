#### LSTM
分為input, input_gate, forgot_gate, output_gate
會用sigmoid作為gate的activation原因是output會界在0~1可視為機率
```Python
model = tf.keras.Sequential([
							 tf.keras.layers.Embedding(tokenizer, vocab_size=x),
						 tf.keras.layers.Bidirectional(tf.keras.layers.LSTM(64)),
						 tf.keras.layers.Dense(64, activation='relu'),
						 tf.keras.layers.Dense(1, activation='sigmoid')
])


```

## Convolutional Neural Network(CNN)

###### CV
```Python
model = tf.keras.models.Sequential([

tf.keras.layers.Conv2D(16, (3,3), activation='relu', input_shape=(150, 150, 3)),

tf.keras.layers.MaxPooling2D(2, 2),

tf.keras.layers.Conv2D(32, (3,3), activation='relu'),

tf.keras.layers.MaxPooling2D(2,2),

tf.keras.layers.Conv2D(64, (3,3), activation='relu'),

tf.keras.layers.MaxPooling2D(2,2),

tf.keras.layers.Conv2D(128, (3,3), activation='relu'),

tf.keras.layers.MaxPooling2D(2,2),

tf.keras.layers.Flatten(),

tf.keras.layers.Dense(512, activation='relu'),

tf.keras.layers.Dense(1, activation='sigmoid')

])

model.compile(optimizer=tf.keras.optimizers.RMSprop(learning_rate=0.001),

loss='binary_crossentropy',

metrics=['accuracy'])


history = model.fit(train_generator,

epochs=20,

verbose=1,

validation_data=validation_generator)
```


###### Data Augmentation
```Python
train_datagen = ImageGenator(rescale=1./255.,
							 #旋轉參數
							 rotation_range=40,
							 #水平方向為位移
width_shift_range=0.2,
#垂直方向位移
height_shift_range=0.2,
#圖像剪裁
shear_range=0.2,
#圖像縮放
zoom_range=0.2,
#水平翻轉
horizontal_flip=True,
fill_mode='nearest')
```

###### 將一張圖片轉換為array
```python
#A trick when you want to flatten a matrix X of shape (a,b,c,d) to a matrix X_flatten of shape (b∗∗c∗∗d, a) is to use:
#a樣本數, b 長度, c 寬度, d每一個橡樹的特徵通成為3

X_flatten = X.reshape(X.shape[0], -1).T 
```


###### Convolutional Layer(卷積層)
```Python
#實現方法將附近的元素乘積一遍
tf.keras.layers.Conv2D(filters=x, kernel_size=x, padding=x, strides=x)
```

###### Pooling Layer(池層)
```Python
#找附近元素最大的
#pool_size代表過濾器大小
#strides代表步長
#padding代表擴充多少
#計算公式(n+2p-f/2)+1
tf.keras.layers.MaxPooling2D(pool_size = x,
							 strides = x, 
							padding = x)
```

##### 輸入層
```Python
tf.keras.layers.Flatten()
```

##### Dense(密集連接層)
```Python
#參數1填 神經元數目, avtivation函數可用tf.nn.relu
tf.keras.layers.Dense(, actiavion = )
```

###### 將圖像數據標準化
```Python
ImageDataGenerator(rescale=1./255.)
```

## Recurrent Neural Network(RNN)
NLP
```Python
model = tf.keras.Sequential([
		 tf.keras.layers.Embedding(vocab_size, embedding_dim, input_length=max_length),
		 tf.keras.layers.Flatten(),
		 tf.keras.layers.Dense(6, activation='relu'),
		 tf.keras.layers.Dense(1, activation='sigmoid')	
])

model.compile(loss='binary_crossentropy', optimizer='adam', metrices='accuracy')
```

###### 印出模型資料
```Python
model.summary()
```

###### MLPClassifier
```Python
from sklearn.neural_network import MLPClassifier
model = MLPClassifier()
```

