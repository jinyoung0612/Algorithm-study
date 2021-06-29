#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 21

int N;
vector<pair<int,int>> egg; //내구도, 무게
int answer=0;
void dfs(int idx){

    if(idx>=N){
        int cnt=0;
        for(int i=0; i<N; i++){
            if(egg[i].first<=0){
                cnt+=1;
            }
        }
        answer=max(answer,cnt);
        return;
    }

    if(egg[idx].first<=0){
        dfs(idx+1);
    }
    else{
        bool flag=false;
        for(int i=0; i<N; i++){
            if(i==idx || egg[i].first<=0) continue;
            egg[idx].first-=egg[i].second;
            egg[i].first-=egg[idx].second;
            flag=true;
            dfs(idx+1);
            egg[idx].first+=egg[i].second;
            egg[i].first+=egg[idx].second;
        }
        // 더이상 깰 계란이 이 없으면 return
        if(!flag){
            dfs(N);
        }
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N;
    int s,w;

    for(int i=0; i<N; i++){
        cin>>s>>w;
        egg.push_back({s,w});
    }
    dfs(0);
    cout<<answer;
    
    

    return 0;
} 