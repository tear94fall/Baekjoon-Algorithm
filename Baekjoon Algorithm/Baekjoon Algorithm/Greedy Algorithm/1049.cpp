/*
 * 백준 1049번
 * 문제이름 : 기타줄
 * 알고리즘 분류 : 그리디 알고리즘
 */

#include <iostream>
#include <algorithm>

int main(void){
    int n;
    int m;
    std::cin>>n>>m;
    
    int min_pack=1001;
    int min_one=1001;
    
    for(int i=0;i<m;i++){
        // 패키지 낱개
        int temp1, temp2;
        std::cin>>temp1>>temp2;
        
        min_pack = std::min(min_pack, temp1);
        min_one = std::min(min_one, temp2);
    }
    
    /*
     주의 : 패키지 1개 가격보다 6개를 낱개로 살때 더 싼 경우에 대한 처리도 해야함.
           38-40번 줄에 해당. 
     
     1. 6개 이하인 경우
        1-1. 패키지 1개 가격 > 갯수 * 낱개 가격
        1-2. 패키지 1개 가격 < 갯수 * 낱개 가격
     2. 6개 이상일 경우
        2-1. (패키지 * (전체 갯수/6)) + (낱개 * (전체 갯수%6)) 가격 > (패키지 * (전체 갯수/6)) + 패키지 1개 가격
        2-2. (패키지 * (전체 갯수/6)) + (낱개 * (전체 갯수%6)) 가격 < (패키지 * (전체 갯수/6)) + 패키지 1개 가격
     */
    
    if(min_pack>min_one*6){
        min_pack = min_one*6;
    }
    if(n<6){
        std::cout<<std::min(min_pack, min_one*n)<<"\n";
    }else{
        std::cout<<std::min( ((n/6)*min_pack)+min_pack, ((n/6)*min_pack)+((n%6)*min_one) )<<"\n";
    }
    return 0;
}
