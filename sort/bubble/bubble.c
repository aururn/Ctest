#include <stdio.h>

void bubble(int a[], int n)
{
    int i,j;
    int cnt = 0;

    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--){
            if(a[j-1] > a[j]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                cnt++;
            }
        }
    }

    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    putchar('\n');
    printf("%d\n",cnt);
}

int main()
{
    int i,nx;
    int x[100];

    scanf("%d",&nx);

    for(i=0;i<nx;i++){
        scanf("%d",&x[i]); 
    }

    bubble(x,nx);

    return 0;
}
