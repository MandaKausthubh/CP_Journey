x = int(input())
first_digit = x % 1000
ans = 0
factor = 1000
p = 0
ans = first_digit + 1 

for _ in range(3):
    ans *= 10
    if p == first_digit + 1:
        p += 1
    ans += p
    p += 1

print(ans)
