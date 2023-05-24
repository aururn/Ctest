#include  <stdio.h>

#define swap(type, x, y)    do {type t = x; x = y; y = t; } while (0)

void shakersort(int a[],int n)
{
    int  left = 0;
    int  right = n - 1;
    int  last = right;

    while (left < right){
        int  j;
        for (j = right; j > left; j--){
            if (a[j - 1] > a[j]){
                swap(int, a[j - 1], a[j]);
                last = j;
            }
        }
        left = last;

        for (j = left; j < right; j++){
            if (a[j] > a[j + 1]){
                swap(int, a[j], a[j + 1]);
                last = j;
            }
        }
        right = last;
    }
}

int main(void)
{
    int  i;
    int  x[7];
    int  nx = sizeof(x) / sizeof(x[0]);
    
    printf("%d個の整数を入力せよ。\n", nx);
    for (i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    shakersort(x, nx);                          /* 配列xをシェーカーソート */

    puts("昇順にソートしました。");
    for (i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    return (0);
}