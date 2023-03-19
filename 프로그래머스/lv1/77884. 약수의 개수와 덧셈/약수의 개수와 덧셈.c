#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    int temp = 0;
    
    for(int j= left; j<=right; j++)
    {
        for(int i= 1; i<=right; i++)
        {
            if(j%i==0)
                temp = temp + 1;
        }
        if(temp%2==0)
            answer = answer + j;
        else
            answer = answer - j;
        temp = 0;
            
    }
    return answer;
}