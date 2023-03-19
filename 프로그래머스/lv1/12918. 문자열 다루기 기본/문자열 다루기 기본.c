#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    bool answer = true;
    int len = strlen(s);
    
    if(len==4 || len==6)
    {
        for(int i=0; i<len; i++)
        {
            if(s[i]>='0' && s[i]<='9')
                continue;
            else
                return false;
        }
    }
    else
        return false;
        
    return answer;
}