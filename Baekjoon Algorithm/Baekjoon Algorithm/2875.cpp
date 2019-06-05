/*
 * 백준 2875번
 * 문제이름 : 대회 or 인턴
 * 알고리즘 분류 : 그리디 알고리즘
 */
 
 #include <cstdio>

int main(void){
     int n, m, k, team=0;
     scanf("%d %d %d", &n, &m, &k);
     
     while(n+m-3>=k&&n>=2&&m>=1){
          n-=2;
          m-=1;
          team++;
     }
     printf("%d\n", team);
     
     return 0;
}
