#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    int a = strlen(s);
    int* answer = (int*)malloc(sizeof(int)*a);
    int alphabet[26]={0,}; //몇번째 나왔는지 저장하는 배열
  
    for(int i=0; i<a; i++)
    {
        if(alphabet[s[i]-97]==0)  //글자가 처음 나왔으면
        {
            answer[i]=-1;           
            alphabet[s[i]-97]=i+1;  //몇번째에 나오는지 저장
        }
        else                        //처음 나온것이 아니라면
        {
            answer[i]=i+1-alphabet[s[i]-97];    // 몇칸 앞에 나오는지
            alphabet[s[i]-97]=i+1;              // update
        }
    }
 
    return answer;
}