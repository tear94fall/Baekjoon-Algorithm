/*
 * 백준 8979번
 * 문제이름 : 올림픽
 * 알고리즘 분류 : 구현
 */
 
 #include <cstdio>

int main(void){
     int n, k, count=0, arr[1000][4];
     scanf("%d %d", &n, &k);
     int idx;
     for(int i=0;i<n;i++){
          scanf("%d %d %d %d", &arr[i][0] ,&arr[i][1], &arr[i][2], &arr[i][3]);
          if(arr[i][0]==k){
               idx = i;
          }
     }
     
     for(int j=0;j<n;j++){
          if(idx!=j){
               if(arr[j][1]>arr[idx][1]){
                    count++;
               }else if(arr[j][1]>=arr[idx][1]&&arr[j][2]>arr[idx][2]){
                    count++;
               }else if(arr[j][1]>=arr[idx][1]&&arr[j][2]>=arr[idx][2]&&arr[j][3]>arr[idx][3]){
                    count++;
               }
          }
     }
     
     printf("%d\n", count+1);
     
     return 0;
}
