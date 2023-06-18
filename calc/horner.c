/* f(x)=Anx^n + An-1x^n-1 ...
計算量は n^2/2 + n
*/

#include <stdio.h>

double fn(double x, double a[], int n)
{
    double p;
    int i;

    p=a[n];
    for(i=n-1;i>=0;i--)
        p=p*x+a[i];
    return p;
}

int main()
{
    static double a[] ={1,2,3,4,5};
    double x;

    for(x=1;x<=5;x++)
        printf("fn(%f) = %f\n",x,fn(x,a,4));
    return 0;
}
