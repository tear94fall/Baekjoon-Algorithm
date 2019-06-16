/*
 * 백준 2960번
 * 문제이름 : 라토스테네스의 체
 * 알고리즘 분류 : 구현
 */
 
#include <iostream>

int arr[1003]={0,};

int main(void){
    int n,k;
    std::cin>>n>>k;
    
    int cnt = 1;
    
    for(int i=2;i<=n;i++){
        for(int j=1;i*j<=n;j++){
            if(arr[i*j]==0){
                arr[i*j]=cnt;
                cnt++;
            }
        }
    }
    
    for(int i=2;i<n+1;i++){
        if(arr[i]==k){
            std::cout<<i<<std::endl;
        }
    }
    
    return 0;
}
