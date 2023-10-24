from collections import deque
from sys import stdin


def solve():
    is_reverse = False
    for f in func:
        if f == 'R':
            if is_reverse:
                is_reverse = False
            else:
                is_reverse = True
        else:
            if num:
                if is_reverse:
                    num.pop()
                else:
                    num.popleft()
            else:
                return False
    if is_reverse:
        num.reverse()
    return True


T = int(stdin.readline().rstrip())

for tc in range(T):
    func = stdin.readline().rstrip()
    n_len = int(stdin.readline().rstrip())
    x = stdin.readline().rstrip()

    num = deque()
    if n_len:
        num = deque(map(int, x[1:-1].split(',')))
    p = ''
    count = 0

    if solve():
        if num:
            ans = '['
            for idx,x in enumerate(num):
                if idx == len(num) -1:
                    ans += str(x)
                else:
                    ans += str(x)
                    ans += ','
            ans +=']'
            print(ans)
        else:
            print('[]')
    else:
        print('error')
