def find_smallest(arr):
  smallest = arr[0]
  smallest_index = 0
  
  for i in range(1,len(arr)):
    if arr[i] < smallest:
        smallest = arr[i]
        smallest_index = i
  
  return smallest_index



def selectionSort(arr):
  newArr = []
  for i in range(len(arr)):
      smallest = find_smallest(arr)
      newArr.append(arr.pop(smallest))

  return newArr


print("Введите длину  списка")

len_array=int(input())
array = []

for i in range(len_array):
      a = int(input())
      array.append(a)

print(selectionSort(array))
