#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    
    int idx1=0,idx2=0; //1,2번 뭉치 사용했으면 ++ 할려고 만듬 
    
    for(int i=0; i<goal_len; i++)
    {   
        if(strcmp(goal[i],cards1[idx1])!=0 && strcmp(goal[i],cards2[idx2])!=0) // 1,2번 뭉치에 없으면 못만듬
           return "No";
        
        if(idx1<cards1_len-1)
        {
            if(!strcmp(goal[i],cards1[idx1])) //1번 뭉치 확인해서 있으면
            {
                idx1++;                       //idx1++
                continue;                     //다음으로 넘어가자
            }
        }
       
       if(idx2<cards2_len-1)        
       {
            if(!strcmp(goal[i],cards2[idx2]))
            {
                idx2++;
                continue;
            }
       }
    }
    
    return "Yes"; //위 반복문을 통과하면 만들 수 있음
}