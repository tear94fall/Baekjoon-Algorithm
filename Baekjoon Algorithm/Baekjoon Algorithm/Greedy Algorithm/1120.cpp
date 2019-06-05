/*
 * 백준 1120버
 * 문제이름 : 문자열
 * 알고리즘 분류 : 그리디 알고리즘
 */
 
#include <cstdio>
#include <string.h>

int main(void){
     char a[50], b[50];
     scanf("%s %s", a, b);
     
     int a_len, b_len, count=0, min=50;
     a_len = strlen(a);
     b_len = strlen(b);
     
     for(int i=0;i<=b_len-a_len;i++){
          for(int j=0;j<a_len;j++){
               if(a[j]!=b[i+j]){
                    count++;
               }
          }
          if(min>count){
               min = count;
          }
          count=0;
     }
     
     printf("%d\n", min);
     
     return 0;
}
