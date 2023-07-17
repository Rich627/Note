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
#give x value 要用c()
x = c(1,2,3)

#查看
x
#查看型態
mode (x)
#查看長度
length(x)

#要1~100
x = c(1:100)

#變成矩陣 r代表row
rbind(x1,x2)
x1 = c(1,2,3)
x2 = c(4,5,6)

#統計語法
mean(x)
sum(x)
max(x)
min(x)
var(x)
prod(x) #連乘
sq(x) #標準差

#1:5*2
2 4 6 8 10
#1:5*2-1
1 3 5 7 9

#a[5]
顯示第五筆資料
a[-5]
顯示全部資料除了第五筆
a[-(1:5)]
1-5筆不顯示其他都會顯示
a(c(3,5,7))
顯示第3,5,7筆資料

＃seq(5,20)
產生5-20的向量
#公差為2
＃seq(5,20,by2)
＃seq(5,20,length=10)
總共有10項5開始20結束給r算公差多少

#letters[1:30]
印出英文字26-30項NA

#a裡面最大的index
which.max(a)
#印出value是2的值
a[which(a == 2)]

#把a順序顛倒
rev(a)
#a由小排到大
sort(a)

#矩陣
#直得往下排
a1 = 1:12
matrix(a1,nrow=3,ncol=4)
＃橫的排
a1 = 1:12
matrix(a1,nrow=3,ncol=4,byrow = T)
#轉置矩陣
t(a)
#矩陣相加減
a+b  
a-b
＃矩陣相乘
a%*b%
a*b是相對應的位置相乘
#找對角線
diag(a)
#diag(diag(a))
產生對角線以外是0的矩陣
#產生n階單位矩陣
diag(n)
#產生normal分佈的矩陣
a = matrix(rnorm(16),4,4)
＃解線代ax=by
solve(a,b)
ex.
a = matrix(rnorm(16),4,4)
b = c(1:4)
solve(a,b)

#判斷x是向量,陣列,矩陣嗎
is.vector(x)
is.array(x)
is.matrix(x)

#可以把x變成矩陣
matrix包含array包含向量
dim(x) <-c(2,3) 

＃dataframe是一種matrix差別在dataframe可以放字串
#把兩個vector變成dataframe
ex. 
x1 = c(1:10)
x2 = c(11:20)
x = data.frame(x1,x2)
#換x1,x2的title
x = data.frame('重量' = x1, '運費' = x2)

#畫點圖
plot(x)

#讀文件
x = read.table('path')

#for 語法
for (i in 1:59) {a[i] = i*2+3}

#while 語句
a[1]=5
i=1
while (a[i]<1231) {i=i+1;a[i]=a[i-1]+2}

#產生100個隨機數
num = seq(1,100)
#round()四捨五入語法,runif()產生均勻分布的隨機數
x1 = round(runif(100,max=100,min=60))
#rnorm()產生常態分佈的隨機數
x2 = round(rnorm(100,mean=80,sd=5))
x3 = round(rnorm(100,mean=83,sd=18)) 
x3[which(x3>100)]=100 #發現有值大於100,用which篩選大於100的數=100
x=data.frame(num,x1,x2,x3)
write.table (x, file ="/Users/rich/Desktop/R學習/test.xls", sep =" ", row.names=F,col.names =F)
