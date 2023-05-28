#### 取得股價資料
```Python
import yfinance as yf

stock = yf.Ticker('xx') 
df = stock.history(start='',end='')
```

#### 常用操作
```Python
#股票價格和企業行動的歷史
stock.history()
#股票的基本資料
stock.info()
#公司的企業行動(Corporate Action)資料
stock.actions
#內部人士與機構法人持有比例
stock.major_holders
#主要持有的機構法人
stock.insttitutional_holders
#資產負債表
stock.balance_sheet
#現金流量表
stock.cashflow
#損益表
stock.financials
#公司4年間的總收入(Revenue)與盈虧(Earnings)
stock.earnings
```

#### 取得K線
```Python
import yfinance as yf 
#period週期
#interval 間隔
Data_2330TW=yf.download('2330.TW', start='2022-01-01', end='2022-12-31', period='5d', interval='5m')
```
