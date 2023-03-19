#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = 0;
    
    if(num==0)
        return 0;
    
    while(num!=1)
    {
        
        if(num%2==1)
            num = num*3 +1;
        else
            num/=2;
        
        answer++;
        if(answer==500)
            return -1;
    }
    
    return answer;
}