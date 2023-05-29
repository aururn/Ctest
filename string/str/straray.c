#include <stdio.h>


int main()
{
    char st[10];

    st[0] = 'a';
    st[1] = 'b';
    st[2] = 'c';
    st[3] = 'd';
    st[4] = 'e';
    st[5] = 'f';
    st[6] = '\0';
    st[7] = 'A';

    printf("文字列stには\"%s\"が格納されています。\n",st);
    
    return 0;
}