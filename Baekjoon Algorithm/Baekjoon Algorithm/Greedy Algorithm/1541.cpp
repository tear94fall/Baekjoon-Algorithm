/*
 * 백준 1541번
 * 문제이름 : 잃어버린 괄호
 * 알고리즘 분류 : 그리디 알고리즘
 */

// 55-50+40

#include <iostream>
#include <string>

int main(void){
     std::string str;
     std::cin>>str;
     
     int minus=false;
     std::string temp="";
     int result=0;
     
     for(int i=0;i<str.size()+1;i++){
          if(str[i]=='-'||str[i]=='+'||str[i]=='\0'){
               if(minus){
                    result -= atoi(temp.c_str());
               }else{
                    result += atoi(temp.c_str());
               }
               temp="";
               
               if(str[i]=='-'){
                    minus=true;
               }
               continue;
          }
          temp+=str[i];
     }
     
     printf("%d\n", result);
     
     return 0;
}
