#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    int N;
    int X = 3;
    scanf("%d", &N);
    for (int i = 1; i < N; i++) {
        X = X * 2 - 1;
    }
   
    printf("%d", X*X );
    
    return 0;
}