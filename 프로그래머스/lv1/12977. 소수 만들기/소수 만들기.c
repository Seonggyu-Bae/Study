#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int sum =0;
    
    for(int i=0; i<nums_len-2; i++)
    {
        for(int j= i+1; j<nums_len-1; j++)
        {
            for(int k= j+1; k<nums_len; k++)
            {
                sum = nums[i] + nums[j] + nums[k];
                for(int l = 2; l<sum; l++)
                {
                    if(sum%l==0)
                        break;
                    if(l==sum-1)
                        answer++;
                }
            }
        }
    }
    return answer;
}