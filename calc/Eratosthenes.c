#include<stdio.h>
#include<math.h>
#define NUM 1000

int main(void){
    static int prime[NUM+1];
    int i,j,limit;

    for(i=2;i<=NUM;i++){
        prime[i] = 1;
    }

    limit = (int)sqrt(NUM);

    // jの初期値が4なのは0,1は素数ではなくて2は素数であると明らかだから。
    for(int i=2; i<=limit;i++){
        if(prime[i] == 1){
            for(j=2*i;j<=NUM;j++){
                if(j%i==0){
                    prime[j]=0;
                }
            }
        }
    }

    int index = 0;

    for(i=2;i<=NUM;i++){
        if(prime[i]==1){
            printf("%5d",i);
            index++;
            if(index%10==0){
                printf("\n");
            }
        }

    }

}