#include <stdio.h>
#include <string.h>

int str_cmp(const char *s1, const char *s2)
{
    while(*s1 == *s2){
        if(*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main()
{
    char st[128];

    puts("\"ABCD\"との比較");
    puts("\"XXXX\"で終了");

    while(1){
        printf("文字列st : ");  scanf("%s",st);

        if(strcmp("XXXX",st) == 0)
            break;
        printf("str_cmp(\"ABCD\",st) = %d\n",str_cmp("ABCD",st));
    }

    return 0;

}