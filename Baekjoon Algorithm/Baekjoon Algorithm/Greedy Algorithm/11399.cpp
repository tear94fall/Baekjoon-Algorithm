/*
 * 백준 11399번
 * 문제이름 : ATM
 * 알고리즘 분류 : 그리디 알고리즘
 */
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
     
     int n,sum=0;
     cin>>n;
     
     vector<int> vec(n,0);
     for(int i=0;i<n;i++)
          std::cin>>vec[i];
     
     sort(vec.begin(),vec.end());
     for(int i=0;i<n;i++)
          sum+=vec[i]*(n-i);
     
     cout<<sum<<endl;
     
     return 0;
}
