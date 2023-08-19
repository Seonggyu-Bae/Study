T = int(input())

for tc in range(1, T + 1):
    N = int(input())

    board = [input() for _ in range(N)]
    is_possible = False

    for i in range(N):
        r_count = 0
        c_count = 0
        for j in range(N):
            if board[i][j] == 'o':
                r_count += 1
            else:
                r_count = 0

            if board[j][i] == 'o':
                c_count += 1
            else:
                c_count = 0

            if r_count >= 5 or c_count >= 5:
                is_possible = True
                break
        if is_possible:
            break

    di = [1, 1, -1, -1]
    dj = [1, -1, 1, -1]

    for i in range(N):
        if is_possible:
            break
        for j in range(N):
            if is_possible:
                break
            for d in range(4):
                count = 0
                for k in range(0, 5):
                    ni, nj = i + di[d] * k, j + dj[d] * k
                    if 0 <= ni < N and 0 <= nj < N and board[ni][nj] == 'o':
                        count += 1
                    elif 0 <= ni < N and 0 <= nj < N and board[ni][nj] == '.':
                        count = 0
                if count >= 5:
                    is_possible = True
                    break

    if is_possible:
        print(f'#{tc} YES')
    else:
        print(f'#{tc} NO')
