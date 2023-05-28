
Reference[document](https://twstock.readthedocs.io/zh_TW/latest/)

#### 基本語法
```Python
import twStock

stock =twStock.Stock('股票代號')

#Array 越前面越舊
#31日股價(收盤價)
stock.price
#股票代號
stock.sid
#股票日期
stock.date
#總成交股數
stock.capacity
#總成交金額
stock.turnover
#開盤價
stock.open
#收盤價
stock.close
#最高價
stock.high
#最低價
stock.low
#漲跌價差
stock.change
#成交筆數
stock.transaction
```

#### 取得其他日期的資料
```Python
#回傳指定年月的資料
stock.fetch(year, month)
#回傳指定年月至今的資料
sotck.fetch_from(year, month)
```

#### 股市資訊分析
```Python
#計算n日移動平均線
#前n日收盤價加總/n
sotck.moving_average(stock_price, day)
#計算day日平均交易量
stock.moving_average(stock.capacity, day)
#計算五日、十日乖離值
#目前價格-均線
#正乖離:超買價格可能會下修
stock.ma_bias_ratio(5, 10)
```

#### 四大交易點判斷
• 量大收紅/量大收黑  
• 量縮價不跌/量縮價跌  
• 三日均價由下往上/三日均價由上往下  
• 三日均價大於六日均價/三日均價小於六日均價
```Python
import twstock  
stock = twstock.Stock('2330')  
bfp = twstock.BestFourPoint(stock) print(bfp.best_four_point_to_buy()) #判斷是否為四大買點 
print(bfp.best_four_point_to_sell()) #判斷是否為四大賣點 
```

#### 確認資料真假
```Python
#取得即時資料
stock = twstock.realtime.get('2330')
#有False代表有錯誤的資料
stock = twstock.realtime.get('2330')
stock['success']
```

