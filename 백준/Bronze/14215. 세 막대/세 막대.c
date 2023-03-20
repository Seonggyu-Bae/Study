#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    int sum = 0;
    scanf("%d %d %d", &a, &b ,&c);
    sum = a + b + c;

    if (a == b && b == c)
        printf("%d", sum);
    else if ((a == b && b != c)) {
        if (c > a)
            printf("%d", 4 * a - 1);
        else
            printf("%d", sum);
    }
    else if ((a == c && b != c)) {
        if (b > a)
            printf("%d", 4 * a - 1);
        else
            printf("%d", sum);
    }
    else if ((c == b && a != c)) {
        if (a > c)
            printf("%d", 4 * c - 1);
        else
            printf("%d", sum);
    }
    else if (a > b && a > c) {
        if (a >= b + c) {
            printf("%d", 2 * (b + c) - 1);
        }
        else
            printf("%d", sum);
    }
    else if (b >c && b > a) {
        if (b >= a + c) {
            printf("%d", 2 * (a + c) - 1);
        }
        else
            printf("%d", sum);
    }
    else if (c > b && c > a) {
        if (c >= b + a) {
            printf("%d", 2 * (b + a) - 1);
        }
        else
            printf("%d", sum);
    }
       

    return 0;
}