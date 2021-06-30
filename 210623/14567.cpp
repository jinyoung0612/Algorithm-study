#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
#define MAX 1001
int N,M;
int dp[MAX];
vector<int> graph[MAX];
vector<int> v[MAX];
int indeg[MAX];
int result[MAX];

int getResult(int num){
    // 선수과목이 없으면 1학기 걸림
    int &res=dp[num];
    if(res!=0) return res;

    res=1;
    for(int i=0; i<v[num].size(); i++){
        res=max(res,getResult(v[num][i])+1);
    }
    return res;
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    // 1. 위상 정렬 84ms
  
    cin>>N>>M;
    int a,b;
    for(int i=0; i<M; i++){
        cin>>a>>b;
        graph[a].push_back(b);
        indeg[b]+=1;
    }

    queue<int> q;
    for(int i=1; i<=N; i++){
        if(indeg[i]==0){
            q.push(i);
        }
        result[i]=1;
    }

    while(!q.empty()){
        int cur=q.front();
        q.pop();

        for(int i=0; i<graph[cur].size(); i++){
            int next=graph[cur][i];
            indeg[next]-=1;
            //  선수 과목을 다 만족 했으면
            if(indeg[next]==0){
                q.push(next);
                result[next]=max(result[next],result[cur]+1);
            }
        }
    }

    for(int i=1; i<=N; i++){
        cout<<result[i]<<" ";
    }

    // 2. DP 80ms

    cin>>N>>M;
    int a,b;
    for(int i=0; i<M; i++){
        cin>>a>>b;
        // b의 선수과목은 a
        v[b].push_back(a);
    }
    for(int i=1; i<=N; i++){
        cout<<getResult(i)<<" ";
    }
    return 0;
} 