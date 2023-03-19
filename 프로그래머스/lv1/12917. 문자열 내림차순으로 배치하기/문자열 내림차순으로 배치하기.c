#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    
    char* answer = (char*)malloc(sizeof(char) * strlen(s));
    int count[52]={0,};
    int temp=0;
    
    for(int i=0; i<strlen(s); i++){
        if(s[i]>='a' && s[i]<='z')
            count[s[i]-'a']++;
        else
            count[s[i]-'A'+26]++;
    }
    
    for(int i=25; i>=0; i--){
        if(count[i]>0){
            for(int j=0; j<count[i]; j++)
                answer[temp++] = i + 'a';
        }
    }
    
    for(int i=51; i>=26; i--){
        if(count[i]>0)
        {
            for(int j=0; j<count[i]; j++)
                answer[temp++] = i + 'A'-26 ;
        }
    }
    answer[temp] = '\0';
    return answer;
}