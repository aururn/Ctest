// 単純挿入ソート 前と比較して、大きかったら挿入を繰り返す n^2/2 O(n^2) ※２分挿入ソート調べる

#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do{ type t = x; x = y; y = t;} while(0)

void insert(int a[], int n)
{
    int i,j;

    for(i = 1; i<n; i++)
    {
        int temp = a[i];
        for(j=i; j>0 && a[j-1] > temp; j--)
            a[j] = a[j-1];
        a[j] = temp;
    }
}

int main()
{
    int i,nx;
    int *x;

    puts("単純挿入ソート");
    printf("要素数："); scanf("%d",&nx);

    x = calloc(nx,sizeof(int));

    for(i=0;i<nx;i++){
        printf("x[%d]:",i); scanf("%d",&x[i]); 
    }

    insert(x,nx);

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