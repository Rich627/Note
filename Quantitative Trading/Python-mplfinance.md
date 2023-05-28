#### 繪圖
```Python
import mplfinance as mpf  
#volume:是否顯示成交量
#mav:移動平均線
#ylabel_lower:成交量的y軸標題
mpf.plot(data=x, type='candel', style='yahoo', volume=True , 
mav=True)
```