a = input()
b = input()
c = []

for (i, x) in enumerate(a):
    if(x == b[i]):
        c.append('0')
    else:
        c.append('1')

print(''.join(c))
