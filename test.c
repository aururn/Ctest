#include <stdio.h>

int main()
{
    int i,j;

    printf("    |   ");

    for (i=1; i<=9; i++)
        printf("%2d  ",i);
    
    putchar('\n');
    for (i=1; i<=43; i++)
    {
        if(i==5)
        {
            printf("+");
        }
        printf("-");
    }

    putchar('\n');
    for (i=1; i<=9; i++)
    {
        printf(" %d  |   ",i);
        for (j=1; j<=9; j++)
        { 
            printf("%2d  ",i*j);
        }
        putchar('\n');
    }

    return 0;
}