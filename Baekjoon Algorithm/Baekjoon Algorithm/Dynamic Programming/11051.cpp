/*
 * 백준 11051번
 * 문제이름 : 이항계수 2
 * 알고리즘 분류 : 다이나믹 프로그래밍
 */

#include <iostream>
#include <cstdio>

int main(void){
    int arr[1001][1001];
    int n,k;
    
    scanf("%d %d", &n, &k);

    arr[0][0]=0;
    arr[1][0]=1;
    arr[1][1]=1;

    for(int i=2;i<n+1;i++){
        arr[i][0]=1;
        for(int j=1;j<i;j++){
            arr[i][j] = ((arr[i-1][j-1])%10007)+((arr[i-1][j])%10007);
        }
        arr[i][i]=1;
    }

    printf("%d\n", (arr[n][k])%10007);
    
    return 0;
}
