n = int(input())
arr = list(map(int, input().split()))

mini = min(arr)
maxi = max(arr)

print()
M = arr.index(maxi)
arr.reverse()
m = arr.index(mini)

# print(arr)
# arr.reverse()
# print(arr[M], arr[-m - 1]) 
# print(M, m)

if(M < n - 1 - m):
    print(m + M)
else:
    print(m + M - 1)
