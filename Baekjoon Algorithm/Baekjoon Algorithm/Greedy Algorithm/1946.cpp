/*
 * 백준 1946번
 * 문제이름 : 신입 사원
 * 알고리즘 분류 : 그리디 알고리즘
 */

#include <iostream>
#include <algorithm>

int main(void){
     int t;
     std::pair<int, int> apply[100000];
     
     std::cin>>t;
     
     for(int i=0;i<t;i++){
          int n;
          int count=1;
          int interview_score;
          std::cin>>n;
          
          for(int i=0;i<n;i++){
               std::cin>>apply[i].first>>apply[i].second;
          }
          
          std::sort(apply, apply+n);
          
          interview_score = apply[0].second;
          
          for(int i=1;i<n;i++){
               if(apply[i].second<interview_score){
                    count++;
                    interview_score = apply[i].second;
               }
          }
          
          std::cout<<count<<"\n";
     }
     
     return 0;
}
