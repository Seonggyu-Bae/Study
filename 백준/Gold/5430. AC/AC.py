from collections import deque
from sys import stdin


def solve():
    is_reverse = False
    for f in func:
        if f == 'R':
            is_reverse = not is_reverse
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

    if n_len:
        x = x[1:-1].split(',')
    else:
        x = []

    num = deque(x)

    if solve():
        if num:
            print(f"[{','.join(list(num))}]")
        else:
            print('[]')
    else:
        print('error')
