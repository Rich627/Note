
### Simple Linear Regression
$y=ax+b$
$a$ is slope
$b$ is intercept 
$x$ is called feature
$y$ is called label
```Python
from sklearn.linear_model import LinearRegression

lm = LinearRegression()
```

### Multivariable Regression
#### $y=a_1x_1+a_2x_2+a_3x_3+...a_nx_n+b=θ^TX$
$a_1$ is coefficient of $x_1$
$a_2$ is coefficient of $x_2$
$b$ is intercept 
```Python
from sklearn.linear_model import LinearRegression

lm = LinearRegression()
```
### Polynomial Regression
用於非線性關係
$y = a_1x_1^n+a_2x_1^{n-1}+a_3x_1^{n-2}+...a_nx_1+b$
```Python
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.pipeline import Pipeline
#特徵較少可以將degree變大
model = Pipeline([('poly', PolynomialFeatures(degree=3)),
('linear', LinearRegression(fit_intercept=False))])
                  
model = model.fit(x, y)
```

### Ridge Regression
Ridge Regression是一種線性回歸模型，只是Loss function增加一個正則化項，進而防止模型過度擬合。
```Python
form sklearn.linear_model imoprt Ridge
#alpha帶大可能會underfitting
RidgeModel = Ridge(alpha = x)
```

### Logistic Regression
$\hat y= \sum(\theta^TX)$

### K-Nearest Neighbours(KNN)
看附近的點是什麼類別決定自己哪一類
```Python
from sklearn.neighbors import KNeighborsClassifier
#n_clusters代表要取k個元素
model = KNeighborsClassifier(n_clusters = x)
```

### Decision Tree
```Python
from sklearn.tree import DecisionTreeRegressor
from sklearn import tree

model = DecisionTreeRegressor(random_state=1)
```

### Random Forest
一種ensemable larning演算法，該model採用Bagging方法，Bagging是是均勻取出後放回，可解決High Variance的問題
```Python
from sklearn.ensemble import RandomForestRegressor
model = RandomForestRegressor(n_estimators=x, random_state=0)
```

### AdaBoost
一種ensemable larning演算法，該model採用Boosting方法，Boosting是投票制採用有權重的投票，可解決Hign Bias的問題
```Python
from sklearn.enseamble import AdaBoostClassifier
model = AdaBoostClassifier(n_estimators=x, 
						  learning_rate=x)
```

### Gradient Boosting Tree(GBT)

### Extreme Gradient Boosting(XGBoost)

### SVM
Loss function:$L(f)=\sum_n l(f(x^n, \hat y^n)+\lambda ||w||_2$
Hinge Loss:$l(f(x^n, \hat y^n)=max(0, 1-\hat y^nf(x))$
```Python
from sklearn.svm import LinearSVC  
model = LinearSVC(C=1.0)  
```


### Softmax Regression

### K-means
一種分群演算法
 ```Python
import sklearn.cluster import KMeans
model = KMeans(n_clusters=x)
model.fit()
```
 
### Principal Component Analysis(PCA)
PCA 是一種降維的機器學習算法，他可以把高維度的數據壓縮成低維度
```Python
from sklearn import PCA
#n_components 選擇要保留的特徵個數
pca = PCA(n_components=xx)
pca.fit()

```


