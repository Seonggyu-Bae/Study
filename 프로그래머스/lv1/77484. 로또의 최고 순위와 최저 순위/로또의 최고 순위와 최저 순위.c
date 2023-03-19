#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
 
    int* answer = (int*)malloc(sizeof(int)*2);
    int zero_count = 0;
    int correct_count = 0;
    
    for(int i=0; i<lottos_len; i++)
    {
        if(lottos[i]==0)
                zero_count++;
        
        for(int j=0; j<win_nums_len; j++)
        {
            if(lottos[i]==win_nums[j])
                correct_count++;
        }
    }
    
    int sum = zero_count + correct_count;
    
    if(sum == 6)
        answer[0] = 1;
    else if(sum==5)
        answer[0] = 2;
    else if(sum==4)
        answer[0] = 3;
    else if(sum==3)
        answer[0] = 4;
    else if(sum==2)
        answer[0] = 5;
    else
        answer[0] = 6;
    
    if(correct_count == 6)
        answer[1] = 1;
    else if(correct_count==5)
        answer[1] = 2;
    else if(correct_count==4)
        answer[1] = 3;
    else if(correct_count==3)
        answer[1] = 4;
    else if(correct_count==2)
        answer[1] = 5;
    else
        answer[1] = 6;
    
    return answer;
}