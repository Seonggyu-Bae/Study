import sys

N = int(input())

my_set = set(('ChongChong',))

for _ in range(N):
    A, B = sys.stdin.readline().rstrip().split()
    if A in my_set or B in my_set:
        my_set.add(A)
        my_set.add(B)

print(len(my_set))