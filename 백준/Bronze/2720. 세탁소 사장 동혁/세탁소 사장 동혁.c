#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    int T, C, Q, D, N,P ;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &C);
        Q = C / 25;
        D = (C - Q*25) / 10;
        N = (C - (Q * 25) - (D * 10)) / 5;
        P = (C - (Q * 25) - (D * 10) - (N * 5)) / 1;
        printf("%d %d %d %d\n", Q, D, N, P);
    }
    return 0;
}