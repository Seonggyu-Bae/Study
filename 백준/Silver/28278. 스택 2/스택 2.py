import sys


class stack:
    def __init__(self, size):
        self.size = size
        self.s = [0] * size
        self.top = -1

    def push(self, X):
        if self.top < self.size - 1:
            self.top += 1
            self.s[self.top] = X
        else:
            print('overflow!')

    def how_many(self):
        print(self.top + 1)

    def isempty(self):
        if self.top == -1:
            print(1)
        else:
            print(0)

    def pull(self):
        if self.top == -1:
            print(-1)
        else:
            print(self.s[self.top])
            self.top -= 1

    def print_top(self):
        if self.top == -1:
            print(-1)
        else:
            print(self.s[self.top])


N = int(input())
mystack = stack(N)

for i in range(N):
    command = list(map(int, sys.stdin.readline().split()))
    if command[0] == 1:
        mystack.push(command[1])
    elif command[0] == 2:
        mystack.pull()
    elif command[0] == 3:
        mystack.how_many()
    elif command[0] == 4:
        mystack.isempty()
    else:
        mystack.print_top()
