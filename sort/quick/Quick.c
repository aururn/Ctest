/*クイックソート:pivotを決めて分けていく
平均計算量は O(nlogn) 最悪計算量は O(n^2)
スタックを用いたら、スタック数は最低 log(n)
pivotは中央値が望ましい
*/

#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do{type t = x; x=y; y=t;}while(0)

void Quick(int a[], int left, int right)
{
    int pl = left;
    int pr = right;
    int x = a[(pr+pl)/2];

    do{
        while (a[pl] <x) pl++;
        while (a[pr] >x) pr--;
        if(pl <= pr){
            swap(int, a[pl],a[pr]);
            pl++;
            pr++;
        }
    }while(pl<=pr);
    if(left<pr) Quick(a,left,pr);
    if(pl <right) Quick(a,pl,right);
}

int main()
{
    int i,nx;
    int *x;

    puts("クイックソート");
    printf("要素数："); scanf("%d",&nx);

    x = calloc(nx,sizeof(int));

    for(i=0; i<nx; i++){
        printf("a[%d] = ",i); scanf("%d",&x[i]);
    }

    Quick(x,0,nx-1);

    puts("昇順ソート");
    for(i=0;i<nx;i++)
        printf("x[%d] = %d\n",i,x[i]);
    
    free(x);

    return 0;
}

/*
void Quick(int a[], int n)
{
    int pl = 0;
    int pr = right;
    int x = a[(pr+pl)/2];

    do{
        while (a[pl] <x) pl++;
        while (a[pr] >x) pr--;
        if(pl <= pr){
            swap(int, a[pl],a[pr]);
            pl++;
            pr++;
        }
    }while(pl<=pr);
    if(left<pr) Quick(a,);
    if(pl <right) Quick(a,);
}*/
