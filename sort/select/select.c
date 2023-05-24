/* 単純選択ソート  安定ではない*/

/*バブルソート(単純交換ソート)
前後を比較して、要素を交換する
要素数n-1の入れ替えが起こる 比較回数 (n-1)+(n-2)+...+1 =
*/

#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do{ type t = x; x = y; y = t;} while(0)

void select(int a[], int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++){
        int min = i;
        for(j=i+1;j<n;j++){
            if(a[j] < a[j+1])
                min = j;
            swap(int,a[i],a[min]);
        }
    }
}

int main()
{
    int i,nx;
    int *x;

    puts("単純選択ソート");
    printf("要素数："); scanf("%d",&nx);

    x = calloc(nx,sizeof(int));

    for(i=0;i<nx;i++){
        printf("x[%d]:",i); scanf("%d",&x[i]); 
    }

    select(x,nx);

    puts("ソートしました");
    for(i=0;i<nx;i++){
        printf("x[%d] = %d\n",i,x[i]); 
    }

    free(x);

}

/*
    for(i=0; i<n-1; i++)
        for(j=n-1; j<i;j--)
            if(x)
*/