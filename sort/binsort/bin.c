#include <stdio.h>

#define M 10

void bin_sort(int a[],int n)
{
    int i,j,bin[M+1];
    for(i=0;i<=M;i++)
        bin[i]=-1;
    for(i=0;i<n;i++)
        bin[a[i]] = a[i];
    j=0;
    for(i=0;i<=M;i++)
        if(bin[i] != -1){
            printf("%d %d\n",i,j);
            a[j++] = bin[i];}
}

int main(){
    int x[100],i,N;

    scanf("%d",&N);
    for(i=0;i<N;i++) scanf("%d",&x[i]);
    bin_sort(x,N);

    for(i=0;i<N;i++) printf("%d",x[i]);

    return 0;
}