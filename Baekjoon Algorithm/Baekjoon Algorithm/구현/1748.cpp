/*
 * 백준 1748번
 * 문제이름 : 수 이어쓰기 1
 * 알고리즘 분류 : 구현
 */

#include <cstdio>
#include <string.h>
#include <math.h>

int main(void){
     int n;
     scanf("%d", &n);
     
     int sum = 0;
     int len = 1;
     
     while(1){
          if((int)pow(10,len)>n){
               len-=1;
               break;
          }
          len++;
     }
     
     
     while(n>0){
          int temp = n-((int)pow(10,len))+1;
          temp*=(len+1);
          sum+=temp;
          n=(int)pow(10,len)-1;
          len -= 1;
     }
     
     printf("%d\n", sum);
     
     return 0;
}
