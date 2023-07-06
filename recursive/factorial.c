#include <stdio.h>

int ct = 0;

int factorial(int n)
{
    if(n==1) return 1;
    else{
        printf("aaa\n");
        return n* factorial(n-1);
    }    
}

int main(){

    int n;

    printf("n = "); scanf("%d",&n);

    printf("n! = %d\n",factorial(n));
    printf("%d",ct);

    return 0;
}