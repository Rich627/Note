#### SMA(Sample Moving Average)

```Python
from talib.abstract import SMA

smaData = SMA(K_Data,timeperiod=5)
```

#### EMA()
EMA是搭配SMA，再給予每根K棒不同權重，越靠近的K棒，權重越高
前一日EMA乘以n-1的值加上當日收盤價2倍的値 合計以後，除以n+1
$EMA_t = \frac{EMA_{t-1} (n-1)+2Close_t }{n+1}$
```Python
from talib.abstract import EMA
emaData = EMA(KData,timeperiod=5)
```

#### WMA()
每一個週期的K棒值，會賦予不同的權重，時 間越遠的K棒值的加權會越低
$𝑾𝑯𝑨_𝒕 = \frac{C𝒍𝒐𝒔𝒆𝒕−𝟒×𝟏+C𝒍𝒐𝒔𝒆𝒕−𝟑×𝟐+C𝒍𝒐𝒔𝒆𝒕−𝟐×𝟑+C𝒍𝒐𝒔𝒆𝒕−𝟏×𝟒+C𝒍𝒐𝒔𝒆𝒕×𝟓}{15}$
```Python
from talib.abstract import WMA
wmaData = WMA(KData,timeperiod=5)
```

#### DEMA()
DEMA = 2 * N日EMA - N日EMA的 EMA
```Python
from talib.abstract import DEMA
demaData = DEMA(KData,timeperiod=5)
```

#### TEMA()
全名Triple Exponential Moving Average，又稱三重指數平均移動線。  
• 一般均線指標會有滯後性，也就是當指標出現訊號時，價格已經漲了或跌了
一段時間。  
•TEMA=3xEMA1-3xEMA2+EMA
```python
from talib.abstract import TEMA
temaData = TEMA(KData,timeperiod=5)
```

#### RSV(RawStochasticValue)
$RSV=\frac {今日收盤價-最近n天min}{最近n天max-最近n天min}$ x $100$

```Python

```
#### KD
```Python
#df k棒資料
#fastk_period
#slowk_period
#slowd_period
stochData=STOCH(df,fastk_period=x,slowk_period=x,slowd_period=x)
```



-   fastk_period:今日收盤價在這段行情波段中(行情的最高與最低值範圍中)所處的相對位 置(百分比)值。
    
-   slowk_period:fastk的3日修正式移動平均值(對應K值1/3的分母值)。
    
-   slowd_period:slowk的3日修正式移動平均值(對應D值1/3的分母值)。
#### MACD(Moving Average Convergence / Divergence)
$DIF = EMA_{(close,n1)}-EMA_{(close,n2)}, n1:短均線, n2:長均線$
$MACD = EMA(DIF, n3), n3:MACD週期$
$OSC=DIF–MACD, OSC>0趨勢偏多,OSC<0趨勢偏空$

```Python
#fastperiod 短均線週期
#slowperiod 長均線週期
#signalperiod MACD週期
from talib.abstract import MACD

macdData=MACD(df,fastperiod=x,slowperiod=x,signalperiod=x)
```

#### RSI
$𝑹𝑺I =\frac {某期間股票漲幅平均值}{某期間股票漲幅平均值+某期間股票跌幅平均值}$ x $100$
