// シェルソート グループに分けて単純挿入ソートする


#include <stdio.h>
#include <stdlib.h>


void shell(int a[], int n)
{
    int i,j,h;

    for(h= n/2; h >0; h/=2)
        for(i=h; i < n; i++){
            int temp = a[i];
            for(j=i-h; j>0 && a[j] > temp; j-=h)
                a[j+h] = a[j];
            a[j+h] = temp;       
    }
}

int main()
{
    int i,nx;
    int *x;

    puts("バブルソート");
    printf("要素数："); scanf("%d",&nx);

    x = calloc(nx,sizeof(int));

    for(i=0;i<nx;i++){
        printf("x[%d]:",i); scanf("%d",&x[i]); 
    }

    shell(x,nx);

    puts("ソートしました");
    for(i=0;i<nx;i++){
        printf("x[%d] = %d\n",i,x[i]); 
    }

    free(x);

}

/*
    void shell(int a[], int n)
    {
        int i,j,h;

        for(h = n/2; h > 0; h /= 2){
            for(i = h; i < n; i++){
                int temp = a[i];
                for(j = i-h; j =>0 && a[j] > temp; j-=h;)
                    a[+h] = a[j];
                a[j+h] = temp;
            }
        }
    }
*/