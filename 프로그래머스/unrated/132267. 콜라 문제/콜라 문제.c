#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) {
    int answer = 0;
    int temp = n;
    
    while(temp>=a)
    {
       answer+=(temp/a) * b;
        temp = (temp/a) * b + (temp%a);
    }
        
    return answer;
}