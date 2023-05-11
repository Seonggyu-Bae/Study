#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* num) {
    int temp, len = strlen(num);
    for (int i = 0; i < len / 2; i++) {
        temp = num[i];
        num[i] = num[len - i - 1];
        num[len - i - 1] = temp;
    }
}

int main() {

    char A[10002] = { 0, };
    char B[10002] = { 0, };
    char plus[10002] = { 0, };
    int long_len, carry=0, sum=0;

    scanf("%s %s", &A, &B);
    reverse(A);
    reverse(B);

    if (strlen(A) > strlen(B))
        long_len = strlen(A);
    else
        long_len = strlen(B);

    for (int i = 0; i < long_len; i++) {
        sum = (A[i] - 48) + (B[i] - 48) + carry;

        if (sum < 0)
            sum += 48;

        if (sum > 9)
            carry = 1;
        else
            carry = 0;

        plus[i] = (sum % 10) + 48;

    }
        
    if (carry == 1)
        plus[long_len] = 49;

    reverse(plus);
    printf("%s",plus);

    return 0;
}