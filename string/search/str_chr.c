#include <stdio.h>

int str_chr(const char *s, int c)
{
    int i = 0;

    c = (char)c;

    while (s[i] != c){
        if(s[i] == '\0')
            return -1;
        i++;
    }
    return i;
}

int main()
{
    char str[64];
    char tmp[64];
    int ch,idx;

    printf("文字列："); scanf("%s",str);

    printf("探す文字："); scanf("%s",tmp);
    ch = tmp[0];

    if((idx = str_chr(str,ch)) == -1)
        puts("存在しない");
    else
        printf("%cは%d文字目に存在する",ch,idx+1);

    return 0;
}