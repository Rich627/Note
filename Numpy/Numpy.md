###### 產生 vector
```Python
#row向量
np.array([x, x, x])
#col向量
np.array([[x],
		[x],
		[x]])
```

###### 建立矩陣
```Python
np.array([[x, x],
		[x, x]])
		
np.mat([[x, x]
	   [x, x],
	   [x, x]])
```
###### 產生稀疏矩陣
```Python
#會印出非零元素的位置和值
from scipy import sparse
sparse.csr_matrix(matrix)
```

###### 查看形狀
```Python
np.shape
```

查看元素幾個
```Python
np.size
```

查看維度
```Python
np.ndim
```


```Python
np.shape
```
###### 將向量攤平or矩陣
```Python
#n, m是行列數
#會攤成(n*m, )的np.array
matrix.flatten()
```
###### 切一個interval
```Python
#a是左端點, b是右端點, num是總共幾個點
np.linspace(a, b ,num=x)
```
###### 算矩陣的跡(trace)
跡就是對角線元素的和
```Python
matrix.trace()
```

###### 轉移矩陣`
```Python
a.T
```

###### 計算行列式
```Python
np.linalg.det(a)
```

###### 找出對角線元素
```Python
#offset=1主對角線

a.diagonal(offset=1)
```

###### 特徵值特徵值與特徵向量
```Python
eigenvalues, eigenvectors = np.linalg.eig(matrix)
```
	
###### 計算統計值
```Python
np.max(matrix)
np.min(matrix)
np.mean(martix)
np.var(matrix)
np.std(matrix)
```

###### 查看矩陣的rank
```Python
np.linalg.martix_rank(a)
```

###### 矩陣乘法or向量內積or點積
```Python
#向量內積, 向量係數積, 矩陣乘法
np.dot(a, b)
a@b

#矩陣逐一元素相乘, 元素積
np.multiply(x , x)
a*b
```


###### 矩陣相加減
```Python
#加法
np.add(a, b)
a+b
#減法
np.subtract(a, b)
a-b
```

###### 計算反矩陣
```Python
np.linalg.inv(matrix)
```

###### 讀取txt並存成np.array
```Python
#txt如果有標題會報錯, 需要跳過title, 如果是cvs檔需加delimiter
np.loadtxt('x', skiprows=1, delimiter = ',')
```

###### 生出一個全為0的向量
```Python
#m,n可填數字
np.zeros(m, n)
#x ,y若是變數要+shape語法
np.zeros(shape=(x,y))
```

###### 生成單位矩陣
```Python
#參數填shape
np.eye(x, x)
```
###### Pad
```Python
#array要padding的陣列,
#pad_width
#mode選constant就好
#pad_width = ((x1, y1), (x2, y2)) x第幾軸, y要填幾個數字
np.pad(array, pad_width, mode='constant')
```


```Python

```
