#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    
    char* answer = (char*)calloc(3,sizeof(char));
    
    if(strlen(s)%2==0){
        answer[0] = s[strlen(s)/2 -1];
        answer[1] = s[strlen(s)/2];
    }
    else
        answer[0] = s[strlen(s)/2];
    
    
    return answer;
}