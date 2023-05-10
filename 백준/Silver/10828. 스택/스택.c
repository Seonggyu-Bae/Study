#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10000

typedef struct STACK {
    int arr[MAX_SIZE];
    int top;
}MYSTACK;

void stackinit(MYSTACK* a) {
    a->top = -1;
}

void push(int x, MYSTACK* a) {
    a->top++;
    a->arr[a->top] = x;
}

int pop(MYSTACK* a) {
    if (a->top == -1) {
        return -1;
    }
    else {
        int x = a->top;
        a->top--;
        return a->arr[x];
    }
}

int size(MYSTACK* a) {
    int size = a->top + 1;
    return size;
}

int empty(MYSTACK* a) {
    if (a->top == -1)
        return 1;
    else
        return 0;
}

int top(MYSTACK* a) {
    if (a->top == -1)
        return -1;
    else
        return a->arr[a->top];
}


int main(void) {
    MYSTACK store_int;
    stackinit(&store_int);
    int i,N;
    int X;
    char command[7];
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%s", &command);
        if (!strcmp(command, "push")) {
            scanf("%d", &X);
            push(X, &store_int);
        }
        else if (!strcmp(command, "pop"))
            printf("%d\n", pop(&store_int));
        else if (!strcmp(command, "size"))
            printf("%d\n", size(&store_int));
        else if (!strcmp(command, "empty"))
            printf("%d\n", empty(&store_int));
        else if (!strcmp(command, "top"))
            printf("%d\n", top(&store_int));
    }

    return 0;
}