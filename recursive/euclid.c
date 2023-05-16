#include <stdio.h>

int gcd(int x, int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}

int main()
{
    int a,b = 0;

    printf("a = "); scanf("%d",&a);
    printf("b = "); scanf("%d",&b);

    printf("最大公約数は%d",gcd(a,b));

    return 0;
}