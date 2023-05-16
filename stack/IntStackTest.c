#include <stdio.h>
#include "IntStack.h"

int main(){

    Intstack s;

    if(Initialize(&s,64) == -1){
        puts("失敗");
        return 1;
    }

    while(1){
        int menu,x;

        printf("現在のデータ数: %d / %d\n",Size(&s),Capacity(&s));
        printf("(1)push (2)pop (3)peek (4)print (0)finish :");
        scanf("%d",&menu);

        if(menu == 0) break;

        switch(menu){
            case 1: printf("data : "); scanf("%d",&x);
                    if(Push(&s,x)==-1)
                        puts("failed");
                    break;

            case 2: if(Pop(&s,&x)==-1)
                        puts("failed");
                    else
                        printf("poped date is %d \n",x);
                    break;

            case 3: if(Peek(&s,&x) == -1)
                        puts("failed");
                    else
                        printf("peeked data is %d",x);
                    break;
            
            case 4: Print(&s); break;
        }
    }

    Terminate(&s);
    
    return 0;
}