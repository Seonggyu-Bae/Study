from itertools import combinations

N, S = map(int, input().split())
numbers = list(map(int, input().split()))
ans = 0
for i in range(1, N + 1):
    subset = list(combinations(numbers, i))
    for sub in subset:
        temp = 0
        for s in sub:
            temp += s
        if temp == S:
            ans += 1

print(ans)
