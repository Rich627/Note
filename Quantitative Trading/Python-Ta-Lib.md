#### SMA(Simple Moving Average)
$SMA_n = \frac {\sum_{i=1}^n Close}{n}$
```Python
from talib.abstract import SMA

smaData = SMA(K_Data,timeperiod=5)
```

#### EMA(Exponential Moving Average)
EMA是搭配SMA，再給予每根K棒不同權重，越靠近的K棒，權重越高
$EMA_t = \frac{EMA_{t-1} (n-1)+2Close_t }{n+1}$
```Python
from talib.abstract import EMA
emaData = EMA(KData,timeperiod=5)
```

#### WMA(Weighted Moving Average)
每一個週期的K棒值，會賦予不同的權重，時 間越遠的K棒值的加權會越低
$WHA_t = \frac{Close_{𝒕−𝟒}×𝟏+Clost_{𝒕−𝟑}×𝟐+Close_{t−𝟐}×𝟑+Close_{t−𝟏}×𝟒+Close_t×𝟓}{15}$
```Python
from talib.abstract import WMA
wmaData = WMA(KData,timeperiod=5)
```

#### DEMA(Double Exponential Moving Average)
$DEMA = 2EMA_n - EMA_n 的 EMA$
```Python
from talib.abstract import DEMA
demaData = DEMA(KData,timeperiod=5)
```

#### TEMA(Triple Exponential Moving Average)
一般均線指標會有滯後性，也就是當指標出現訊號時，價格已經漲了或跌了
一段時間。  
$TEMA=3EMA_1-3EMA_2+EMA_3$
```python
from talib.abstract import TEMA
temaData = TEMA(KData,timeperiod=5)
```

#### TRIMA(Triangular Moving Average)
就是把SMA再做一次SMA平滑，降低 SMA的敏感度。
```Python
from talib.abstract import TRIMA

```
#### RSV(RawStochasticValue)
$RSV=\frac {今日收盤價-最近n天min}{最近n天max-最近n天min}$ x $100$
```Python
trimaData = TRIMA(K_Data,timeperiod=5,matype=0)
```
#### KD
$K=\frac{𝟐}{3}×上次K值+\frac {𝟏}{3}×目前RSV$
$D=\frac{𝟐}{3}×上次D值+\frac{𝟏}{3}×目前K值$
$K>D$做多
$K<D$做空
```Python
#df k棒資料
#fastk_period:今日收盤價在這段行情波段中(行情的最高與最低值範圍中)所處的相對位 置(百分比)值
#slowk_period:fastk的3日修正式移動平均值(對應K值1/3的分母值)
#slowd_period:slowk的3日修正式移動平均值(對應D值1/3的分母值)
stochData=abstract.STOCH(df,fastk_period=x,slowk_period=x,slowd_period=x)
```

#### MACD(Moving Average Convergence / Divergence)
$DIF = EMA_{(close,n1)}-EMA_{(close,n2)}, n1:短均線, n2:長均線$
$MACD = EMA(DIF, n3), n3:MACD週期$
$OSC=DIF–MACD$ 
OSC>0趨勢偏多,OSC<0趨勢偏空
```Python
#fastperiod 短均線週期
#slowperiod 長均線週期
#signalperiod MACD週期
from talib.abstract import MACD

macdData=MACD(df,fastperiod=x,slowperiod=x,signalperiod=x)
```

#### RSI
依據某期間股價的平均漲幅與平均跌幅所計算的值
$𝑹𝑺I =\frac {某期間股票漲幅平均值}{某期間股票漲幅平均值+某期間股票跌幅平均值}$ x $100$
$RSI 大$:越高代表市場越熱
$RSI 小$:越高代表市場越冷
```python
from talib.abstract import RSI

rsiData = RSI(K_Data,timeperiod=6)
```

#### BBands(BollingerBands)
是一種買賣訊號、進出場時機的指標，用平均線
與機率的觀念找出市場多空訊號。它是結合移動平均線(MA)與標準差的概念。
- 通道上限:通道中心線+2個標準差(股價的壓力線) 
- 通道中心線:某期間的移動平均線 (平均價格)
- 通道下限:通道中心線-2個標準差 (股價的支撐線)
```python
from talib.abstract import BBANDS
#nbdevup:通道上限的標準差倍數   
#nbdevdn:通道下限的標準差倍數
df_band= talib.BBANDS(df, timeperiod=10, nbdevup=2, nbdevdn=2, matype=0)
```