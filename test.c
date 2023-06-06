#include <stdio.h>

void shell(int a[], int n)
{
    int i,j,h;
    int g[100];
    int cnt=0;
    int cc=0;

    for(h= 1; h < (n/9); h=h*3+1){
        g[cc] = h;
        cc++;
        for(i=h; i < n; i++){
            int temp = a[i];
            for(j=i-h; j>0 && a[j] > temp; j-=h){
                a[j+h] = a[j];
                cnt++;
            }
            a[j+h] = temp;       
        }
    }
    
    printf("%d\n",h);
    for(i=0;i<cc;i++)
        printf("%d ",g[i]);
    putchar('\n');
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}

int main()
{
    int i,nx;
    int a[100];
    
    scanf("%d",&nx);
    for(i=0;i<nx;i++)
        scanf("%d",&a[i]);
        
    shell(a,nx);

    return 0;
}