#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 11
int N;
int W[MAX][MAX];
bool visited[MAX];
int start;
int answer=987654321;
void dfs(int cur, int cost, int depth){
    
    if(depth==N-1){
        if(W[cur][start]){
            answer=min(answer,cost+W[cur][start]);
        }
        return;
    }
    for(int i=0; i<N; i++){
        if(W[cur][i]&&!visited[i]){
            visited[i]=true;
            if(cost+W[cur][i]<=answer){
                dfs(i,cost+W[cur][i],depth+1);
            }
            visited[i]=false;
        }
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>W[i][j];
        }
    }

    for(int i=0; i<N; i++){
        start=i;
        visited[i]=true;
        dfs(i,0,0);
        visited[i]=false;
        
    }
    cout<<answer;



    

    
    return 0;
} 