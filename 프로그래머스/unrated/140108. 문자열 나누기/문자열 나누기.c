#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* s) {
    int answer = 0;
    int a = strlen(s);
    int count_x=0, count_nx=0;
    int temp;
    
    for(int i=0; i<a; i++)
    {
        if(count_x == count_nx)           // 횟수가 같아지면
        {
            temp = s[i];                  // 첫글자 지정
            count_x=0;                    // 횟수 리셋  
            count_nx=0;
            answer++;                     // 문자열 개수 증가  
        }
        
        if(temp==s[i])
            count_x++;                      
        else
            count_nx++;
    }
  
    
    return answer;
}