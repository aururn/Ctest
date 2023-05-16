/*線形探索 (番兵法)
    線形探索において、行列の最後にキーを挿入することで、
    キーの発見のみでループを終了できる。
*/
#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int key)
{
    int i = 0;
    a[n] = key;

    while(1){
        if(a[i] == key)
            break;
        i++;
    }
    return i==n ? -1:i;
}

int main()
{
    int i,nx,key,idx;
    int *x;

    puts("線形探索");
    printf("要素数:"); scanf("%d",&nx);
    x = calloc(nx+1,sizeof(int));

    for ( i = 0; i < nx; i++){
        printf("%d : ",i); scanf("%d",&x[i]);
    }
    printf("探す値:"); scanf("%d",&key);

    idx = search(x,nx,key);

    if(idx == -1)
        puts("ありません");

    else
        printf("%d番目\n",idx);

    free(x);

    return 0;
}