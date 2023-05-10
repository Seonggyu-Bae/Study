#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    int N=0, M=0;
    int sum = 0;
    int count = 0;
    scanf("%d %d", &N, &M);
    int A[10000] = { 0, };

    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = i; j < N; j++) {
            sum += A[j];
            if (sum > M)
                break;
            if (sum == M) {
                count++;
                break;
            }
        }
    }
    
    printf("%d", count);

    return 0;
}