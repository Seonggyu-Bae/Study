#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int n) {
    int answer = 0;
    int idx=0;
    int temp=1;
    int three[1000]={0,};
    
    while(n>0)
    {
        three[idx] = n%3;
        idx++;
        n/=3;
    }
    
   int idx_temp = idx;

    for(int i = 0 ; i<idx_temp; i++ )
    {
        for(int j=1; j<idx; j++)
            temp*=3;
        
        answer+=(temp*three[i]);
        idx--;
        temp=1;
    }
    
    return answer;
}