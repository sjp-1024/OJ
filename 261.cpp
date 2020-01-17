/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 261.cpp
*       &Created Time: 19Century 2019年09月01日 星期日 10时23分44秒 
*                          CST  Day/244 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Stack {
    int *data;
    int top, size;
} Stack;

typedef struct 



Stack *init(int n) {
    Stack *s = (Stack *)malloc(sizeof(Stack));
    s->data = (int *)malloc(sizeof(int) * n);
    s->size = n;
    s->top = -1;
    return s;
}

int empty(Stack *s) {
    return s->top == -1;
}

int top(Stack *s) {
    if (empty(s)) return 0;
    return s->data[s->top];
}

int push(Stack *s, int val) { 
    if (s == NULL) return 0;
    if (s->top + 1 == s->size) return 0;
    s->top += 1;
    s->data[s->top] = val;
    return 1;
}

int pop(Stack *s) {
    if (s == NULL) return 0;
    if (empty(s)) return 0;
    s->top -= 1;
    return 1;
}

int getmin(){
	return s->min[s->top];
}


void clear(Stack *s) {
    if (s == NULL) return ;
    free(s->data);
    free(s);
    return ;
}

int main() {
	int n;
	cin>>n;
	#define MAX_OP 1000
    Stack *s = init(MAX_OP);
    for (int i = 0; i < MAX_OP; i++) {
        int op = rand() % 2, val = rand() % 100;
        switch (op) {
            case 0: {
                printf("push %d to stack = %d\n", val, push(s, val));
            } break;
            case 1: {
                printf("pop %d from stack = %d\n", top(s), pop(s));
            }
        }
        output(s);
    }
    return 0;
}

