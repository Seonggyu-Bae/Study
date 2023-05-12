#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char* num) {
    int len, temp;
    len = strlen(num);

    for (int i = 0; i < len / 2; i++) {
        temp = num[i];
        num[i] = num[len - i - 1];
        num[len - i - 1] = temp;
    }

}
int main() {
    int N, B;
    int i = 0;
    scanf("%d %d", &N, &B);
    char ans[100] = { 0, };

    if (B == 10) {
      printf("%d", N);
      return 0;
    }
    else {
        while (N > 0) {
            if (N % B > 9)
                ans[i] = (N % B) + 55;
            else
                ans[i] = (N % B) + 48;

            i++;
            N /= B;
        }
        reverse(ans);
    }

    printf("%s", ans);
   
    return 0;
}