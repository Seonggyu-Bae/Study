#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
   
    char* answer = (char*)malloc(sizeof(int) * 10000);
    int idx=0;
    
    for(int i=1; i<food_len; i++)
    {
        for(int j = 0; j<food[i]/2; j++ ) //음식의 개수의 절반만큼만 
            answer[idx++] = i + '0';
    }
    
    answer[idx++]='0';   // 중간의 물
    
     for(int i=food_len-1; i>=1; i--) //역으로
     {
        for(int j = 0; j<food[i]/2; j++ )
            answer[idx++] = i + '0';
        
    }
    
    return answer;
}