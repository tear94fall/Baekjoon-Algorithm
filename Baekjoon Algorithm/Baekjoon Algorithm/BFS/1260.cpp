/*
 * 백준 1260번
 * 문제이름 : DFS와 BFS
 * 알고리즘 분류 : bfs
 */

#include <cstdio>
#include <queue>

int n,m,v;
int visit[1001];
int adj[1001][1001];

int dfs(int start);
int bfs(int start);

int main(void){
    scanf("%d %d %d", &n, &m, &v);
    
    for(int i=0;i<m;i++){
        int temp1, temp2;
        scanf("%d %d", &temp1, &temp2);
        adj[temp1][temp2]=adj[temp2][temp1]=1;
    }

    dfs(v);
    printf("\n");
    
    bfs(v);
    printf("\n");

    return 0;
}

int dfs(int start){
    visit[start]=1;
    printf("%d ", start);

    for(int i=1;i<=n;i++){
        if(adj[start][i]==1&&visit[i]==0){
            dfs(i);
        }
    }
}

int bfs(int start){
    std::queue<int> q;
    q.push(start);
    visit[start]=3;

    while(!q.empty()){
        int cur = q.front();
        printf("%d ", cur);
        q.pop();
        for(int i=1;i<=n;i++){
            if(adj[cur][i]==1&&visit[i]!=3){
                visit[i]=3;
                q.push(i);
            }
        }
    }
}
