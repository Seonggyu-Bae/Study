#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    
    char* answer = (char*)calloc(strlen(s)+1,sizeof(char));
    int count=1;
    answer = s;
    
    for(int i=0; i<strlen(s); i++){
        
        if(s[i]==' ')
        {
            count=1;
            continue;
        }
        
        if(count%2==0)
        {
            if(s[i]>='A' && s[i]<='Z')
                answer[i] = s[i] + 32;
        }
        else
        {
            if(s[i]>='a' && s[i]<='z')
                answer[i] = s[i] - 32;
        }
        count++;
    }
    
    
    return answer;
}