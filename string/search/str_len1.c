//線形探索を用いてインクリメント

#include <stdio.h>
#include <string.h>

int str_len(const char *s)
{
    int len = 0;

    while(s[len])
        len++;
    return len;
}

int main()
{
    char str[256];

    printf("文字列:"); scanf("%s",str);

    printf("その文字列は%d字(%d)です。\n",strlen(str),str_len(str));

    return 0;
}