//２分探索

#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key)
{
    int low = 0;
    int high = n-1;
    int middle = 0;
    
    do{
        middle = (high + low) /2;
        if(a[middle] == key)
            return middle;
        else if(a[middle] < key)
            low = middle + 1;
        else
            high = middle -1;
    } while(low <= high);

    return -1;
}

int main(void){
    
    int i,nx,key,idx;
    int *x;

    printf("要素数:"); scanf("%d",&nx);
    x = calloc(nx,sizeof(int));

    puts("昇順に入力");
    printf("x[0] = "); scanf("%d",&x[0]);

    for(int i=1; i<nx; i++)
    {
        do{
            printf("x[%d] = ",i); scanf("%d",&x[i]);
        }while(x[i] < x[i-1]);
    }

    printf("検索したい数字 : ");
    scanf("%d",&key);

    idx = bin_search(x,nx,key);

    if(idx == -1)
        puts("ありません");

    else
        printf("x[%d]番目\n",idx);

    free(x);

    return 0;
}

/*
    while(low <= high){
        middle = (low+high)/2;
        if(key == middle){
            printf("見つかりました key = %d\n",middle);
            break;
        }
        else if(key <= middle){
            high = middle -1;
            printf("まだちいさい\n");
            continue;}
        
        else{
            low = middle +1;
            printf("まだ大きい\n");
            continue;}
    }
*/