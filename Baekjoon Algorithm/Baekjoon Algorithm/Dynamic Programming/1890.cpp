/*
 * 백준 1890번
 * 문제이름 : 점프
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */


#include <iostream>
#include <string>

int main(void){
     int n;
     
     int arr[100][100];
     long long dp[100][100];
     
     scanf("%d", &n);
     
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               scanf("%d", &arr[i][j]);
          }
     }
     
     dp[0][0] = 1;
     
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               if(i==n-1&&j==n-1){
                    break;
               }
               
               if(i+arr[i][j]<n && dp[i][j]!=0){
                    dp[i+arr[i][j]][j] += dp[i][j];
               }
               if(j+arr[i][j]<n && dp[i][j]!=0){
                    dp[i][j+arr[i][j]] += dp[i][j];
               }
          }
     }
     
     printf("%lld\n", dp[n-1][n-1]);
     
     return 0;
}

