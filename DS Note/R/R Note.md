###### 下載套件
```R
install.packages("xx")
```

###### 引入套件
```R
libarary("xx")
```

###### 查看數據集
```R
#查看所有數據
View(x)
#查看n筆數據, x是數據集的名字,n是幾筆資料
head(x, n)
```

###### 
```R

```
###### 瞭解某函數如何使用
```R
?function_name()
```
###### vector
```R
vector1 = c(x, x, x)
```
###### 篩選特定的值
```R
library('dplyr')
filter_tf = filter(xx, dose==xx)
```
###### 排序
```R
library('dplyr')
arrange(xx, len)
```
###### 印出資料的前幾筆
```R
head(dataframe)
```
###### 印出col_name
```R
colnames(dataframe)
```
###### 新增col
```R
mutate(data_frame, new_col)
```
###### ggplot
```R
libarary(ggplot2)
#散點圖
ggplot(data=x) + gemo_point(mapping=aes(x=xx, y=xx, color=xx),#color如果放在這裡可以選擇label name，會自動化出不同顏色的圖 
							color='x',#放在這就是打顏色
							shape=xx,
							alpha=xx)#深淺
							
#加title
labs(title=xx, subtitle=x) 
#加作者
caption('x')
#
annotate()
#
facet_wrap()
#
facet_grid()
#平滑的曲線，顯示兩變數關係
gemo_smooth()
#長條圖
gemo_bar()
#存圖片
ggsave('xx')
```
