#include <stdio.h>

int dp[50];

int fibonacci(int n){
    if(n==0 || n==1)
        return dp[n] = 1;
    
    if(dp[n] != -1) return dp[n];
    
    return dp[n] = fibonacci(n-2) + fibonacci(n-1);
    
    
}

int main(){
    int n;
    
    for(int i=0; i<50;i++) dp[i] = -1;
    
    scanf("%d",&n);
    
    printf("%d\n",fibonacci(n));
    
    return 0;
}