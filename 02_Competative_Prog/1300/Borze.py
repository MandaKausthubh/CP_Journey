b = input()
x = []
flag = 0
for c in b:
    if(c == '.'):
        if(flag == 0):
            x.append('0')
        else:
            x.append('1')
            flag = 0
    elif(c == '-'):
        if(flag == 0):
            flag = 1
        else:
            flag = 0
            x.append('2')

print(''.join(x))
