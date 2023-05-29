#include <stdio.h>
#include <stdlib.h>
#include "CircDblLinkedlist.h"

static Dnode *AllocDnode()
{
    return calloc(1,sizeof(Dnode));
}

static void SetDnode(Dnode *n, const Member *x, const Dnode *prev, const Dnode *next)
{
    n->data = *x;
    n->prev = prev;
    n->next = next;
}

static int IsEmpty(const Dlist *list)
{
    return list->head->next == list->head;
}

void Initialize(Dlist *list)
{
    Dnode *dummyNode = AllocDnode();
    list->head = list->crnt = dummyNode;
    dummyNode->prev = dummyNode->next = dummyNode;
}

Dnode *Search(Dlist *list, const Member *x, int compare(const Member *x, const Member *y))
{
    Dnode *ptr = list->head->next;

    while(ptr != list->head){
        if(compare(&ptr->data,x) == 0){
            list->crnt = ptr;
            return ptr;
        }
        ptr = ptr->next;
    }
    return NULL;
}

int Next(Dlist *list)
{
    if(IsEmpty(list) || list->crnt->next == list->head)
        return 0;
    list->crnt = list->crnt->next;
    return 1;
}

int Prev(Dlist *list)
{
    if(IsEmpty(list) || list->crnt->prev == list->head)
        return 0;
    list->crnt = list->crnt->prev;
    return 1;
}

void InsertAfter(Dlist *list, Dnode *p, const Member *x)
{
    Dnode *ptr = AllocDnode();
    Dnode *nxt = p->next;

    p->next = p->next->prev = ptr;
    SetDnode(ptr, x, p, nxt);
    list->crnt = ptr;
}

void InsertFront(Dlist *list, const Member *x)
{
    InsertAfter(list, list->head,x);
}

void InsertRear(Dlist *list, const Member *x)
{
    InsertAfter(list,list->head->prev,x);
}

void Remove(Dlist *list, Dnode *p)
{
    p->prev->next = p->next;
    p->next->prev = p->prev;
    list->crnt = p->prev;
    free(p);
    if(list->crnt == list->head)
        list->crnt = list->head->next;
}

void RemoveFront(Dlist *list)
{
    if(!IsEmpty(list))
        Remove(list, list->head->next);
}

void RemoveRear(Dlist *list)
{
    if(!IsEmpty)
        Remove(list, list->head->prev);
}

void RemoveCurrent(Dlist *list)
{
    if(!IsEmpty)
        Remove(list, list->crnt);
}

void Clear(Dlist *list)
{
    while(!IsEmpty(list))
        RemoveFront(list);
}

void PrintCurrent(const Dlist *list)
{
    if(IsEmpty(list))
        printf("なし\n");
    else
        PrintMember(&list->crnt->data);
}

void PrintLnCurrent(const Dlist *list)
{
    PrintCurrent(list);
    putchar('\n');
}

void Print(const Dlist *list)
{
    if(IsEmpty(list))
        puts("なし\n");
    else{
        Dnode *ptr = list->head->next;
        puts("---");
        while(ptr != list->head){
            PrintLnCurrent(&ptr->data);
            ptr = ptr->next;
        }
    }
}

void PrintReverse(const Dlist *list)
{
    if(IsEmpty(list))
        puts("なし");
    else{
        Dnode *ptr = list->head->prev;
        puts("---");
        while(ptr != list->head){
            PrintLnMember(&ptr->data);
            ptr = ptr->prev;
        }
    }
}

void Terminate(Dlist *list)
{
    Clear(list);
    free(list->head);
}
