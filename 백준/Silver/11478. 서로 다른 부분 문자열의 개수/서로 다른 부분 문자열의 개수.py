S = input()
S_len = len(S)
ans = set()

for i in range(S_len):
    for j in range(1,S_len+1):
        if i + j <= S_len:
            ans.add(S[i:i+j])

print(len(ans))