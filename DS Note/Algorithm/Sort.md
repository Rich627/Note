
Bubble sort
```python
data = [1, 2, 5, 4]
def bubble_sort(data):
	for i in range(len(data)-2):
		for j in range(len(data)-1):
			if data[j] > data[j+1]:
				data[j], data[j+1] = data[j+1], data[j]
	return data
```