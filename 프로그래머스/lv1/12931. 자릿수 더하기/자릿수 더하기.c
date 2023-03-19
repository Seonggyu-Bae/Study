#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if(n>100000000)
        return 0;
    else if(n==100000000)
        answer = 1;
    else
        answer = (n/10000000) + (n/1000000 - n/10000000*10) + (n/100000 - n/1000000*10) + (n/10000 - n/100000*10) + (n/1000 - n/10000*10) + (n/100 - n/1000*10) + (n/10 -n/100*10) + (n%10);
    return answer;
}