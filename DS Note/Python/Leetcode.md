#### 83. Remove Duplicates from Sorted List
```Python

```

#### 168. Excel Sheet Column Title

```python
class Solution:

def convertToTitle(self, columnNumber: int) -> str:

ans=""

while columnNumber>0:

temp=columnNumber%26

#ord可以抓到A的asic code

#-1是因為要處理0的問題

if temp==0:

temp=26

ans=chr(ord('A')-1+temp)+ans

columnNumber=(columnNumber-temp)//26

return ans
```

#### 171. Excel Sheet Column Number
```python
ans = 0

# 64轉10進制

for i in columnTitle:

ans = ans*26 + ord(i) - 64

return ans
```

#### 203. Remove Linked List Elements
```python
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        #要有3個變數1個指向頭1個是前面1個是現在
        dummy = ListNode(-1)
        dummy.next = head
        pre, curr = dummy, dummy.next
        #curr不存在loop會挺停止
        while curr:
            if curr.val == val:
                #如果一樣前指針就指到後面
                pre.next = curr.next
            else:
                #不然就兩個點移動
                pre = curr
            curr = curr.next
        
        return dummy.next
