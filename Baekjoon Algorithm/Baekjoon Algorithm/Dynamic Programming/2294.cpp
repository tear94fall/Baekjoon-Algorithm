/*
 * 백준 2294번
 * 문제이름 : 동전 2
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
#include <algorithm>

int main(void){
    int dp[10001] = {0,};
    int n, k, coin[101];
    
    std::cin>>n>>k;
    
    for(int i=1;i<k+1;i++){
        dp[i]=10001;
    }
    
    for(int i=1;i<n+1;i++){
        std::cin>>coin[i];
        
        for(int j=coin[i];j<k+1;j++){
            dp[j] = std::min(dp[j], dp[j-coin[i]]+1);
        }
    }
    
    if(dp[k]==10001){
        std::cout<<-1<<"\n";
    }else{
        std::cout<<dp[k]<<"\n";
    }
    
    return 0;
}
