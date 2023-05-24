#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do{type t = x; x=y; y=t;}while(0)

void Quick_part(int a[], int left, int right, int n)
{
    int i;
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

    printf("枢軸の値は%d\n",x);

    puts("枢軸以下のグループ");
    for(i=0;i<=pl-1;i++)
        printf("%d ",a[i]);
    putchar('\n');

    if(pl>pr+1){
        puts("枢軸と一致するグループ");
        for(i=pr+1; i <= pl-1; i++)
            printf("%d ",a[i]);
        putchar('\n');
    }

    puts("枢軸以上のグループ");
    for(i=pr+1; i<n; i++)
        printf("%d ",a[i]);
    putchar('\n');
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

    Quick_part(x,0,nx-1,nx);
    
    free(x);

    return 0;
}