#include <stdio.h>

int main()
{
    int a[100],b[100];
    int i;

    for(i=0;i<=50;i++)
    {
        a[i] = 2*i;
        b[i] = 2*i +1;
    }

    for(i=0;i<=50;i++)
        printf("b[a[%d]] = %d\n",i,b[a[i]]);

    return 0;
}