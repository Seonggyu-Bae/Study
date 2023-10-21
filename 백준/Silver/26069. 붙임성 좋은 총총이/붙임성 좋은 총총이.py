import sys

N = int(input())

my_set = set()
my_set.add('ChongChong')

for _ in range(N):
    A, B = sys.stdin.readline().rstrip().split()
    if A in my_set:
        my_set.add(B)
    elif B in my_set:
        my_set.add(A)

print(len(my_set))