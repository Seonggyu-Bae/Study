for tc in range(1, 11):
    N = int(input())
    N_info = [input().split() for _ in range(N)]

    for j in range(N - 1, -1, -1):
        if N_info[j][1] == '+':
            lc = int(N_info[j][2])
            rc = int(N_info[j][3])
            N_info[j][1] = int(N_info[lc - 1][1]) + int(N_info[rc - 1][1])

        elif N_info[j][1] == '-':
            lc = int(N_info[j][2])
            rc = int(N_info[j][3])
            N_info[j][1] = int(N_info[lc - 1][1]) - int(N_info[rc - 1][1])

        elif N_info[j][1] == '/':
            lc = int(N_info[j][2])
            rc = int(N_info[j][3])
            N_info[j][1] = int(N_info[lc - 1][1]) / int(N_info[rc - 1][1])

        elif N_info[j][1] == '*':
            lc = int(N_info[j][2])
            rc = int(N_info[j][3])
            N_info[j][1] = int(N_info[lc - 1][1]) * int(N_info[rc - 1][1])

    print(f'#{tc}', int(N_info[0][1]))
