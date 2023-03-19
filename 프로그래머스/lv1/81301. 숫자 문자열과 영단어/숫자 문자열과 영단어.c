#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int solution(const char* s) {
    int answer = 0;
    int len = strlen(s);
    long long t = 1;
    
    for(int i=len; i>=0; i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            answer+= (s[i]-'0') * t;
            t*=10;
        }
        
        else if(s[i]=='t')
        {
            answer+= 8 * t;
            t*=10;
            i-=4;
            continue;
        }
        else if(s[i]=='n')
        {
            answer+= 7 * t;
            t*=10;
            i-=4;
            continue;
        }
        else if(s[i]=='x')
        {
            answer+= 6 * t;
            t*=10;
            i-=2;
            continue;
        }
        else if(s[i]=='r')
        {
            answer+= 4 * t;
            t*=10;
            i-=3;
            continue;
        }
        else if(s[i]=='o')
        {
            if(s[i-1]=='r')
            {
                t*=10;
                i-=3;
                continue;
            }
            else
            {
                answer+= 2 * t;
                t*=10;
                i-=2;
                continue;
            }
        }
        
        else if(s[i]=='e')
        {
            if(s[i-1]=='n')
            {
                if(s[i-2]=='i')
                {
                    answer+= 9*t;
                    t*=10;
                    i-=3;
                    continue;
                }
                else
                {
                    answer+= 1 * t;
                    t*=10;
                    i-=2;
                    continue;
                }
                    
            }
            else if(s[i-1]=='v')
            {
                answer+= 5 * t;
                t*=10;
                i-=3;
                continue;
            }
            else if(s[i-1]=='e')
            {
                answer+= 3 * t;
                t*=10;
                i-=4;
                continue;
            }
        }
    }
    
    
    return answer;
}