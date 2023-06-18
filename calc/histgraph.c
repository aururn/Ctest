#include <stdio.h>

int main()
{
    int x[100];
    int hist[10];
    int i,n,rank;

    printf("人数:"); scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("点数a[%d]:",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=10;i++)
        hist[i] = 0;
    
    for(i=0; i<n; i++){
        rank = x[i]/10;
        if(0<=rank && rank <=10)
            hist[rank]++;
    }

    for(i=0;i<=10;i++)
        printf("%3d -   :%3d\n",i*10,hist[i]);

    return 0;

}