N = 10

def sumarray(x):
    max = x[0]
    sum = 0
    for i in range(1, N):
        sum+=x[i]
    return sum

a = []
for i in range(N):
    a.append(int(input('a = ? ')))
print('sum = ', sumarray(a))