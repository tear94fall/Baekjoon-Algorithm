/*
 * 백준 9251번
 * 문제이름 : LCS
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
#include <algorithm>
#include <cstring>

int main(void){
    char str1[1002];
    char str2[1002];
    int dp[1001][1001];
    
    scanf("%s %s", str1, str2);
    
    for(int i=1;i<strlen(str1)+1;i++){
        for(int j=1;j<strlen(str2)+1;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }else{
                dp[i][j] = std::max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    
    printf("%d\n", dp[strlen(str1)][strlen(str2)]);
    
    return 0;
}
