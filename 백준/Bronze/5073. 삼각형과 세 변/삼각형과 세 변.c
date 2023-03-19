#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b,c;
    int sum = 0;
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        if (a == 0 && b == 0 && c == 0)
            return 0;
        if (a == 0 || b == 0 || c == 0) {
            printf("Invalid\n");
            continue;
        }
        if (a == b && b == c) {
            printf("Equilateral\n");
            continue;
        }

        if ((a == b && b != c) || (a == c && c != b) || (b == c && b != a)) {
            if (a >= b && a >= c) {
                if (sum - a > a)
                    printf("Isosceles\n");
                else
                    printf("Invalid\n");
            }
            else if (b >= a && b >= c) {
                if (sum - b > b)
                    printf("Isosceles\n");
                else
                    printf("Invalid\n");
            }
            else if (c >= a && c >= b) {
                if (sum - c > c)
                    printf("Isosceles\n");
                else
                    printf("Invalid\n");
            }
            continue;
        }
        if (a != b && b != c && c != a) {
            if (a > b && a > c) {
                if (sum - a > a)
                    printf("Scalene\n");
                else
                    printf("Invalid\n");
            }
            else if (b > a && b > c) {
                if (sum - b > b)
                    printf("Scalene\n");
                else
                    printf("Invalid\n");
            }
            else if (c > a && c > b) {
                if (sum - c > c)
                    printf("Scalene\n");
                else
                    printf("Invalid\n");
            }
        }
    }
   
    return 0;
}