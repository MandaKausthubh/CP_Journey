n = int(input())
arr = list(map(int, input().split()))
maximum = minimum = arr[0]
amazing = 0

for i in range(1, n):
    if(arr[i] < minimum):
        minimum = arr[i]
        amazing += 1
    elif (arr[i] > maximum):
        maximum = arr[i]
        amazing += 1

print(amazing)
