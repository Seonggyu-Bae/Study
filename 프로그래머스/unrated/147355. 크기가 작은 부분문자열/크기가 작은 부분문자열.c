#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    long long a = strlen(t);
    long long  b = strlen(p);
    
    char temp[b+1];            // 부분 문자열 저장을 위한 배열
    int idx=0;                 // 부분 문자열의 index를 위한 변수
    long long p_int = atoll(p);       // atoi 로 p를 미리 정수로 변환함
    
    for(int i=0; i<=a-b; i++)    // p의 길이에 맞게 범위 설정
    {
        for(int j=i; j<i+b; j++)        // p의 길이에 맞게 범위 설정
        { 
            temp[idx++] = t[j];          // 부분 문자열 저장
            
            if(j==i+b-1)                // p 의 길이에 도달했으면
            {   temp[idx] = '\0';       
                if(atoll(temp)<=p_int)   // temp를 정수로 변환해서 비교
                    answer++;           
                idx=0;                  // index 초기화
            }
            
        }
    }
    
    return answer;
}