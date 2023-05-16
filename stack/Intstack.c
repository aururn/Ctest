#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int Initialize(Intstack *s, int max)
{
    s->ptr = 0;
    if((s->stk = calloc(max,sizeof(int))) == NULL){
        s->max = 0;
        return -1;
    }
    s->max = max;
    return 0;
}

int Push(Intstack *s, int *x){
    if(s->ptr >= s->max)
        return -1;
    s->stk[s->ptr++] = x;
    return 0;
}

int Pop(Intstack *s, int *x)
{
    if(s->ptr <= 0)
        return -1;
    *x = s->stk[s->ptr - 1];
    return 0;
}

void Clear(Intstack *s)
{
    s->ptr = 0;
}

int Capacity(const Intstack *s){
    return s->max;
}

int Size(const Intstack *s){
    return s->ptr;
}

int IsEmpty(const Intstack *s){
    return s->ptr <= 0;
}

int IsFull(const Intstack *s){
    return s->ptr >= s->max;
}

int Search(const Intstack *s, int *x){
    int i;

    for(i = s->ptr - 1; i>=0; i--){
        if(s->stk[i] == x)
        return i;}
    return -1;
}

void Print(const Intstack *s){
    int i;
    for(i=0; i<=s->ptr; i++)
        printf("%d",s->stk[i]);
    putchar('\n');
}

void Terminate(Intstack *s){
    if(s->stk != NULL)
        free(s->stk);
    s->max = s->ptr = 0;
}