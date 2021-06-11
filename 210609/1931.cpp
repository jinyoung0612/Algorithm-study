#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 201

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;
    vector<pair<int,int>> v(N);
    
    for(int i=0; i<N; i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmp);
    
    int answer=0;
    int cur=0;
    for(int i=0; i<N; i++){
        if(cur<=v[i].first){
            answer++;
            cur=v[i].second;
        }
    }
    cout<<answer;

 
    return 0;
} 