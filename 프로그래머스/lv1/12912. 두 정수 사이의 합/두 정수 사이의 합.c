#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int min, max;
    
    if(a==b)
        return a;
    
    else if(a>b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
        
   
    for(int i=min; i<=max; i++)
        answer+=i;
    
        
    return answer;
}