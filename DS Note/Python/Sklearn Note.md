###### 特徵縮放
```Python
#MinMax方法 參數可修改
from sklearn.preprocessing import MinMaxScaler
scaler = MinMaxScaler((x, x))
#Robust Scaling 用4分位數去做
from sklearn.preprocessing import 
RobustScaler 
scaler = RobustScaler() 
```

###### 特徵標準化
```Python
from sklearn.preprocessing import StandardScaler

scaler = StandardScaler()
standardized = scaler.fit_transform(x)

```

###### 自定轉換
```Python
from sklearn.preprocessing import
FunctionTransformer

transformer = FunctionTransformer()
```
###### 正規化
```Python
from sklearn.preprocessing import Normalizer
#L2歐式範數(根號norm)
features_l1_norm = Normalizer(norm="l1").transform(features)

#L1曼哈頓範數(絕對值)
normalizer = Normalizer(norm="l2")
normalizer.transform(features)
```
###### 拆分資料
```Python
from sklearn.model_selection import train_test_split
train_X, val_X, train_y, val_y = train_test_split(X, y, train_size=0.8, test_size=0.2, random_state = 0)
```

###### 使用統計值填補缺失值
```Python
from sklearn.impute import SimpleImputer
#strategy參數可填mean, constant, median, most_frequent
#strategy = 'constant'將和fill_value搭配使用
my_imputer = SimpleImputer(strategy=)
imputed_X_train = my_imputer.fit_transform(x)
```

###### 找出離群值
```Python
from sklearn.covariance import EllipticEnvelope
ee = EllipticEnvelope()
ee.fit(X)
# 预测异常点 
y_pred = ee.predict(X) 
# 打印异常点和正常点 
print("异常点：", X[y_pred == -1]) 
print("正常点：", X[y_pred == 1])
```

###### 將數據按等地編號
```Python
from sklearn.preprocessing import OrdinalEncoder
ordinal_encoder = OrdinalEncoder()

label_X_train[object_cols] = ordinal_encoder.fit_transform(X_train[object_cols])
label_X_valid[object_cols] = ordinal_encoder.transform(X_valid[object_cols])
```

###### One-Hot(將非數值col欄位更改為vector)
```Python
from sklearn.preprocessing import OneHotEncoder 
encoder = OneHotEncoder() 
encoder.fit(X) 
X_encoded = encoder.transform(X)
```

###### K-fold交差驗證
```Python
form sklearn.model_selection import KFold, cross_val_score

#shuffle 資料打散
kf = KFold(n_splites=10, shuffle=True, random_state=1)

#第一個參數填使用模型,cv切成幾等分,scoring參數填寫評估模型的指標
scores = cross_val_score(estimator  , test_X, test_y, cv = kf, scoring = '')

```
2
###### Data Transformation
Slightly right-skewed -> Square Root 
Moderately right-skewed -> Log 
Very right-skewed ->Reciprocal(倒數)
###### Grid Serach
```Python
form sklear.model_select import GridSearchCV, cross_val_sc

