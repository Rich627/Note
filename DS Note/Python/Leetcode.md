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
```

#### 205. Isomorphic Strings
```python
```python
class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        map = {}
        for i in range(len(s)):
            #找找看新對應
            if s[i] not in map:
                map[s[i]] = t[i]
            elif map[s[i]] != t[i]:
                return False
            #還要check對應有沒有重複(1-1)
        mapval = [map[k] for k in map]
        #set會顯示唯一, 如果長度和mapval一樣就代表1-1
        return len(mapval) == len(set(mapval))
```
#### 217. Contains Duplicate
```python
class Solution:

def containsDuplicate(self, nums: List[int]) -> bool:

hashset = []


for i in nums:

hashset.append(i)

return len(hashset) != len(set(hashset))
```

#### 206 Reverse Linked List
```python
# Definition for singly-linked list.

# class ListNode:

# def __init__(self, val=0, next=None):

# self.val = val

# self.next = next

class Solution:

def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

#3個指針, 前面當前後面

prev = None

curr = head

#如果點還有就繼續

while curr:

#下一個點就是現在往後

next = curr.next

#下一個點指向前面

curr.next = prev

#前面往後移

prev = curr

#現在往後移

curr = next

return prev
```

#### 219. Contains Duplicate II
```python
```python
class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        #用字典來解
        #字典會對應value和index
        #關鍵紀錄值和index
        hashset = {}

        for i in range(len(nums)):
            #如果值在字典裡面就計算
            if nums[i] in hashset and abs(i-hashset[nums[i]]) <= k:
                return True
            #不在裡面就把index和val加進去
            hashset[nums[i]] = i
        
        return False
```
```