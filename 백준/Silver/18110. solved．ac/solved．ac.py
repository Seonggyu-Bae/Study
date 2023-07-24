import sys
input = sys.stdin.readline

N = int(input())
     
comment = []
sum = 0
for i in range(0,N):
    comment.append(int(input()))

comment.sort()
temp = int(N*0.15+0.5)

for i in range(temp,N-temp):
    sum += comment[i]

if N == 0:
    print('0')
else:    
    print(int(0.5 + sum/(N-2*temp)))