#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int limit, int power) {
    int answer = 0;
    int count;
    
    for(int i=1; i<=number;i++)
    {
        count=1;
        
        for(int j=1; j<=i/2; j++)
        {
            if(i%j==0)
                count++;
        }
        
        if(count>limit)
            answer+=power;
        else
            answer+=count;
    }
    
    
    return answer;
}