#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    long long temp = 0;
    
    for(int i=1; i<=count; i++)
        temp = temp+(price*i);
    
    if(money>=temp)
        answer = 0;
    else
        answer = temp - money;
    
    return answer;
}