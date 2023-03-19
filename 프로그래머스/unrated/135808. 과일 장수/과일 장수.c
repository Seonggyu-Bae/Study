#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// score_len은 배열 score의 길이입니다.
int solution(int k, int m, int score[], size_t score_len) {
    if(score_len<m) //과일이 m개 보다 적으면 바로 리턴
        return 0;
    
    int answer = 0;
    int count[10] = {0,};           //점수당 몇개인지 카운트를 위한 배열

    for(int i=0; i<score_len; i++)
        count[score[i]]++;          //점수확인해서 count증가시킴
    
    for(int i=k; i>0; i--)          //높은 점수부터 포장
    {
        if(count[i]>=m)             //m개 보다 크거나 같으면
        {
            answer+= (count[i] / m) * i * m;  // (몇박스) * 점수 * 사과개수
            count[i-1]+=count[i] % m;         // 나머지는 다음 점수 사과로 보내버림 -> 어차피 최저 사과 점수로 하기때문
        }
        else
            count[i-1]+=count[i];             // m개 보다 적으면 박스를 만들수가없으니 다음 점수 사과로 보내버림
    }
    
    return answer;
}