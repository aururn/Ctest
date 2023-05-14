#include "stdio.h"

void create_array(int *a)
{
    int i;

    for(i=0;i<100;i++){
        a[i]=i;
    }
}

int main(void){
    
    int a[100];
    int low = 0;
    int high = 99;
    int middle = 0;
    int key = 0;

    create_array(a);

    printf("検索したい数字 : ");
    scanf("%d",&key);

    while(low <= high){
        middle = (low+high)/2;
        if(key == middle){
            printf("見つかりました key = %d\n",middle);
            break;
        }
        else if(key <= middle){
            high = middle -1;
            printf("まだちいさい\n");
            continue;}
        
        else{
            low = middle +1;
            printf("まだ大きい\n");
            continue;}
    }

    return 0;

}