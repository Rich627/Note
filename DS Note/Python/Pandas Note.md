###### 資料修改後輸出成csv
```Python
df.to_csv('path')
```
###### 讀取SQL查詢變成dataframe
```Python
database_connection = create_engine('sqlite:///chinook.db')
df = pd.read_sql_query('SELECT * FROM customers', database_connection)
```
###### 取col的值
```Python
df.col_name
df['col_name']
```

###### 重設column name
```Python
df.columns(['x'])
#裡面可放字典orindex
df.rename()
```

###### 查看資料什麼分佈
```Python
from fitter import Fitter
dist_fitter = Fitter(data, distributions=['norm', 'gamma', xx])

dist_fitter.fit()

dist_fitter.summary()
```

###### 新增col
```Python
df['new_column'] = df['xx'] + 1
```

###### 刪除col
```Python
df.drop(columns = ['xx'])
```

###### 新增row
```Python
df.append(xx, ignore_index=True)
```

###### 把NaN一整個row刪掉
```Python
df.drop(axis = 1)
```

###### 指定某col中刪掉有空值的row, inplace = True代表原數據也會更動
```Python
df.dropna(subset=['col_name'], inplace = True)
```

###### 取特定的row
```Python
#裡面要填idex 
df.iloc[[]]
#裡面填value 
df.loc['']
```

###### 取第n個col,m個row
```Python
df.col_name.iloc[]
df.['col_name'][]
```

###### 取特定幾筆資料
```Python
indices = [x, x, x]
df.iloc[indices]
```


###### 查看data type
```Python
df.dtypes()
```

###### row, column設定
```Python
#1是指column
axis = 1
#預設為row
axis = 0
```

###### 資料合併
```Python
#axis=0資料拼在右邊
pd.concat([x, xx.rename()])
#join用法
#inner join
pd.merge(x, xx, on='col_name')
#how參數可填left, outer, right
pd.merge(x, dxx, on='col_name', how='left')
```

###### 按值分類並計數
```python
df['x'].value.counts()
```
###### 資料排序遞減預設為遞增
```Python
df.sort_values('col_name', ascending = False)
```

###### 創建dataframe & series
```Python
df = pd.dataframe(
				  {'col1':[value], 
				  'col2':[val], 
				  index = [index]})
data = pd.series(
				 index = [index],
				 value = [val]
)
```
 
###### 顯示該col中所有不同的值
```Python
df.col.unique()
```

###### 顯示該col中所以值各有多少個 
```Python
df.col.value_counts()
#計算該col中哪些值有幾個
df['col_name'].value_counts()
```

###### 顯示該col中值最大的那一個row的index
```Python
df.col.idxmax()
```

###### 替換某一個值
```Python
#map函數可一次替換多個, replace一次只能一個
df.col.map({'x':'x'})
df.replace('x', 'x')
```

###### 把series中的統計量合併成dataframe
```Python
df.add([x, x])
```

###### 算出全部的col有多少缺失值會是一個series
```Python
missing_val_count_by_column = (df.isnull().sum())
```
###### 選擇特定的數據類型
```Python
#includ選擇要的數據類型, exclude指定要排除的數據類型
df.select_dtypes(include=x, exclude=x)
```

###### 查詢時間欄位中的時間
```Python
#查詢幾號
df[x].dt.day
```

###### 去除頭尾空白
```Python
df['x'].str.strip()
```

###### 刪除重複的資料
```Python
df.drop_duplicates(subset=['x'])
```

###### 分組
```Python
df.group_by('x')
```

###### 填入空值
```Python
df.fillna()
```