arr = [1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9]
count  = 0 
n = len(arr)
for i in range(n):
    if arr[i] != 0:
        arr[count] == arr[i]
        count += 1

while count < n:
    arr[count] = 0
    count += 1

print(arr)