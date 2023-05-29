//力任せ法による文字列探索

#include <stdio.h>

int bf_match(const char txt[], const char pat[])
{
    int pt = 0;     //txtをなぞる
    int pp = 0;     //patをなぞる

    while(txt[pt] != '\0' && pat[pp] != '\0')
    {
        if(txt[pt] == pat[pp]){
            pt++;
            pp++;
        }else{
            pt = pt -pp + 1;
            pp = 0;
        }
    }

    if(pat[pp] == '\0')
        return pt -pp;
    
    return -1;
}

int main()
{
    int idx;
    char s1[256];
    char s2[256];

    puts("力任せ法");

    printf("テキスト："); scanf("%s",s1);
    printf("パターン："); scanf("%s",s2);

    idx = bf_match(s1,s2);

    if(idx == -1)
        puts("テキストにパターンは存在しない");
    else
        printf("%d文字目からマッチする\n",idx+1);
    
    return 0;
}