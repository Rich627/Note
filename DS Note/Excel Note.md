#### Function
###### countif
可以找出有幾個在給定區間之外的值, 也可以計算符合條件的有幾筆
=countif(range, 'value')
##### sumif
計算符合條件的資料的值
=sumif(condiction_range, 'value', val_range)
##### len
算出長度
=len(range)
##### left, right
印出給定長度的字串
=left(range, number of characters)
###### min
取出中間給定長度的字串
=min(range, start point, number of middle characters)
##### concatenate
合併兩個col
=concatenate(item 1, item 2)
##### trim
處理多於空格
=trim(range)
##### vlookup
false代表要查找的是完全一樣, 很類似的不能返回
=vlookup(data, 'where to look', range, col, false)
##### Sort
排序
第三個參數是看要排哪個col要填數字A:1, B:2, True=ascending
=sort(start col, end_col, index, True)
##### convert
CONVERT(number, from_unit, to_unit)
number是要轉換得值
from_init是要轉換的單位
to_init是要轉什麼單位
ex.convert(1, 'ibm', 'kg')
##### sumproduct
計算range1和range2個別元素積
=sumproduct(range1, range2)