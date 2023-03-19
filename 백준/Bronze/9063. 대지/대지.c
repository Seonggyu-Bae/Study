#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int pointX, pointY;
    int Xmin = 10000, Xmax = -10000;
    int Ymin = 10000, Ymax = -10000;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &pointX, &pointY);
        if (pointX > Xmax)
            Xmax = pointX;
        if (pointX < Xmin)
            Xmin = pointX;
        if (pointY > Ymax)
            Ymax = pointY;
        if (pointY < Ymin)
            Ymin = pointY;
    }
    printf("%d", (Xmax-Xmin) * (Ymax-Ymin));
 
    return 0;
}