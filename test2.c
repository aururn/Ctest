#include <stdio.h>

struct Node{
    unsigned int key;
    struct Node *next;
    struct Node *prev;
};

typedef struct Node *NodePtr;
Nodeptr nil;

Nodeptr listSearch(int key)
{
    Nodeptr cur = nil->next;
    while(cur->key != key && cur != nil){
        cur = cur->next;
    }
    return cur;
}

void init(){
    nil = malloc(sizeof(struct Node));
    nil->next = nil;
    nil->prev = nil;
}

void printList(){
    Nodeptr cur = nil->next;
    int isf = 0;
    while(1){
        if(cur == nil)break;
        if(isf++>0) printf("");
        printf("%d",cur->key);
        cur = cur->next;
    }
    printf("\n");
}

void deleteNode(Node *t){
    if(t == nil) return -1;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}

void deleteFirst(){
    deleteNode(nil->next);
}

void deleteLast(){
    deleteNode(nil->prev);
}
void delete(int key){
    Nodeptr t;
    t = listSearch(key);
    if(t==nil) return -1;
    deleteNode(t);
}

void insert(int key){
    Nodeptr x;
    x = malloc(sizeof(struct Node));
    x->key = key;
    if(nil->next == nil)
        nil->prev = x;
    x->next = nil->next;
    nil->next->prev = x;
    nil->next = x;
    x->prev = nil;
}

int main()
{
    int key,n,i;
    int size = 0;
    char s[100];
    
    init();
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",&s,&key);
        if(s[0] == 'i'){
            insert(key); size++;
        }
        else if(s[0] == 'd'){
            if(strlen(s) > 6){
                if(s[6] == 'F'){
                    deleteFirst();
                }else if(s[6] == 'L'){
                    deleteLast();
                }
            }else{
                delete(key);
            }
        size--;
        }
    }
    printlist();
    return 0;
}