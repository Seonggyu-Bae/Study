#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* X, const char* Y) {
  
    char* answer = (char*)malloc(sizeof(char) * 3000000);
    
    int x[10]={0,}; // X의 각 자리수(0~9) 의 개수를 저장하기 위한 배열 
    int y[10]={0,}; // Y의 각 자리수(0~9) 의 개수를 저장하기 위한 배열 
    int idx=0;      //
    
    
    for(int i=0; i<strlen(X); i++)
        x[X[i]-'0']++;              // X는 char형 임으로 -'0' 을 하면 정수형으로 표현가능   '1' - '0' = 1
    for(int i=0; i<strlen(Y); i++)
        y[Y[i]-'0']++;
    
    for(int i=9; i>=0; i--)         //가장 큰 수를 만들어야함으로 9 부터 시작함
    {
        if(x[i]>=y[i] && x[i]!=0)    // 예를 들어 x[9]가 y[9] 보다 크면 
        {
            for(int j=0; j<y[i] ; j++)  //공통으로 나타나는 9의 개수 만큼
            {
                answer[idx] = i+'0';    //answer에 저장함 answer은 char 임으로 +'0' 을 해주어야함
                idx++;
            }
        }
        else if(x[i]<y[i] && x[i]!=0)
        {
            for(int j=0; j<x[i] ; j++)
            {
                answer[idx] = i+'0';
                idx++;
            }
        }
      
    }
    
    // 공통부분이 없으면 "-1" 을 answer 에 저장
    if(answer[0]=='\0')
    {
        answer[0]='-';
        answer[1]='1';
    }
        
    if(answer[0]=='0')
        answer[1]='\0';
  
    return answer;
}