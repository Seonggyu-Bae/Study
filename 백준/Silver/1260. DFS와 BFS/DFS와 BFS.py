def my_bfs(V):
    visited = [0] * (N + 1)
    visited[V] = 1
    Q = [V]

    while Q:
        current = Q.pop(0)
        print(current, end=' ')
        for idx in range(1, N + 1):
            if adj_l[current][idx] == 1 and not visited[idx]:
                Q.append(idx)
                visited[idx] = 1

    print()


def my_dfs(V):
    visited = [0] * (N + 1)
    visited[V] = 1
    stack = [V]

    print(V, end=' ')

    while stack:
        top = stack[-1]
        visited[top] = 1

        for idx in range(1, N + 1):
            if adj_l[top][idx] == 1 and not visited[idx]:
                print(idx, end=' ')
                stack.append(idx)
                break
        else:
            stack.pop()

    print()


# N개의 정점, M개의 간선, V : 탐색을 시작할 정점의번호
N, M, V = map(int, input().split())

# 간선의 정보를 저장할 리스트
adj_l = [[0] * (N + 1) for _ in range(N + 1)]

for _ in range(M):
    S, E = map(int, input().split())
    adj_l[S][E] = 1
    adj_l[E][S] = 1

my_dfs(V)
my_bfs(V)
