#include <stdio.h>
#include <stdlib.h>

#define MAX 2000001
#define VMAX 10000

void fsort(int x[], int n)
{
    int i;
    int *f = calloc(MAX,sizeof(int));
    int *b = calloc(VMAX+1,sizeof(int));
    
    for(i=0;i<MAX;i++) f[i] = 0;
    for(i=0;i<n;i++) f[x[i]]++;
    for(i=1;i<=MAX;i++) f[i]+=f[i-1];
    for(i=n-1;i>=0;i--) b[--f[x[i]]] = x[i];
    for(i=0;i<n;i++) x[i] = b[i];
    
    printf("%d ",x[0]);
    for(i=1;i<n-1;i++) printf("%d",x[i]);
    printf("%d\n",x[n-1]);
}

int main(){
    int i,n;
    int a[VMAX+1];
    
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    
    fsort(a,n);
    
    return 0;
}