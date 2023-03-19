#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// number_len은 배열 number의 길이입니다.
int solution(int number[], size_t number_len) {
    int answer = 0;
    int sum=0;
    
    for(int i=0; i<=number_len-3; i++)
    {
        for(int j=i+1; j<=number_len-2; j++)
        {
            for(int k = j+1; k<number_len; k++)
            {
                sum+=number[i];
                sum+=number[j];
                sum+=number[k];
                if(sum==0)
                    answer++;
                sum=0;
            }
            
        }
        
    }
    
    return answer;
}