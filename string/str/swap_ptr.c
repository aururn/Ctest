#include <stdio.h>

void swap_ptr(char **x, char **y)
{
    char *temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    char *s1 = "ABCD";
    char *s2 = "EFGH";

    printf("ポインタs1は\"%s\"を示している。\n",s1);
    printf("ポインタs2は\"%s\"を示している。\n",s2);

    swap_ptr(&s1,&s2);

    puts("s1とs2を交換");

    printf("ポインタs1は\"%s\"を示している。\n",s1);
    printf("ポインタs2は\"%s\"を示している。\n",s2);

    return 0;
}

/*
#include  <stdio.h>

void swap_str(char *x, char *y)
{
    while (*x  ||  *y) {
        char  t = *x;
        *x++ = *y;
        *y++ = t;
    }
    *x = *y = '\0';
}

#include  <stdio.h>

int main(void)
{
    char  s1[100] = "ABCD";
    char  s2[100] = "Z";

    printf("文字列s1は\"%s\"です。\n", s1);
    printf("文字列s2は\"%s\"です。\n", s2);

    swap_str(s1, s2);

    puts("文字列s1とs2を交換しました。");

    printf("文字列s1は\"%s\"です。\n", s1);
    printf("文字列s2は\"%s\"です。\n", s2);

    return (0);
}*/