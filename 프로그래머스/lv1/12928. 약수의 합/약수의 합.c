#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=1;i<n;i++){
        if(n%i==0)
            answer =+ answer+i;
        else
            answer = answer;
    }
    return answer + n;
}