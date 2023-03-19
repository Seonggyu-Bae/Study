#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*(n * 3));
    strcpy(answer, "");
    //strcat 을 사용하기위해 strcpy를 이용해서answer에 "" 할당
    for(int i=1; i<=n; i++){
       strcat(answer, (i%2==1 ? "수":"박"));
    }

    return answer;
}