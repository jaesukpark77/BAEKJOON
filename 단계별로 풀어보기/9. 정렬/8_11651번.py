n = int(input())
a = []

for i in range(n):
    [x, y] = map(int, input().split())
    rev = [y, x]
    a.append(rev)

b = sorted(a)
for i in range(n):
    print(b[i][1], b[i][0])