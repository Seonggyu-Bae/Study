#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int* solution(int numbers[], size_t numbers_len) {
  
    int* answer = (int*)malloc(sizeof(int) * (numbers_len*numbers_len+1));
    memset(answer,-1,sizeof(int) * (numbers_len*numbers_len+1));
    int temp,idx=0;
    int i,j,k;
    
    for(i=0; i<numbers_len; i++){
        for(j=i+1; j<numbers_len; j++){
            temp = numbers[i] + numbers[j];
            for(k = 0; k<=idx; k++ ){
                if(answer[k] == temp)
                    break;
            }
            if(k==idx+1){
                answer[idx] = temp;
                idx++;
            }
        }
    }
    
    qsort(answer,idx,sizeof(int),compare);
    
    for(i=0; i<idx; i++)
        printf("%d ", answer[i]);
    
    return answer;
}