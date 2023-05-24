//ハノイの塔 円盤を移動させる

#include <stdio.h>

#define SHAFT1 1
#define SHAFT3 3

void move(int no, int x, int y)
{
    if(no > 1)
        move(no -1 ,x,6-x-y);
    printf("円盤%dを%d軸→%d軸に移動\n",no,x,y);

    if(no>1)
        move(no-1, 6-x-y, y);
}

int main()
{
    int n;

    printf("円盤の数 : "); scanf("%d",&n);

    move(n,SHAFT1,SHAFT3); 

    return 0;
}