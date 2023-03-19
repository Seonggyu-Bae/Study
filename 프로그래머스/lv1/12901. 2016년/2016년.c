#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    
    char* answer = (char*)malloc(sizeof(char) * 4);
    int sum=b-1;
    
    for(int i=1; i<a; i++)
    {
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
            sum+=31;
        else if(i == 2)
            sum+=29;
        else
            sum+=30;
    }
    if(sum%7==0)
        answer = "FRI\0";
    else if(sum%7==1)
        answer = "SAT\0";
    else if(sum%7==2)
        answer = "SUN\0";
    else if(sum%7==3)
        answer = "MON\0";
    else if(sum%7==4)
        answer = "TUE\0";
    else if(sum%7==5)
        answer = "WED\0";
    else if(sum%7==6)
        answer = "THU\0";
    
    return answer;
}