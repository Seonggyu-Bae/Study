#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;
    int a_count=0,b_count=0;
    int x, y;
    int p1, p2;
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &a, &b);
        if (i == 0) {
            x = a;
            y = b;
        }
        if (a == x)
            a_count++;
        else
            p1 = a;

        if (b == y)
            b_count++;
        else
            p2 = b;
    }

    if (a_count != 2)
        p1 = x;
    if (b_count != 2)
        p2 = y;

    printf("%d %d", p1, p2);

    return 0;
}