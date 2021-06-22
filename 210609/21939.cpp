#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
#include <set>
#include <map>
using namespace std;

struct cmp{
    bool operator()(pair<int,int>&a, pair<int,int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    }
};
struct cmp2{
    bool operator()(pair<int,int>&a, pair<int,int>&b){
        if(a.second==b.second){
            return a.first>b.first;
        }
        return a.second>b.second;
    }
};
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;
    int P,L;
    set<pair<int,int>> s1;
    map<int,int> m;
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq; //maxheap
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp2> pq2; //minheap

    for(int i=0; i<N; i++){
        cin>>P>>L;
        pq.push({P,L});
        pq2.push({P,L});
        s1.insert({P,L});
        m[P]=L;
    }
    
    int M;
    cin>>M;
    string cmd;
    int x;
    for(int i=0; i<M; i++){
        cin>>cmd;
        if(cmd=="add"){
            cin>>P>>L;
            pq.push({P,L});
            pq2.push({P,L});
            s1.insert({P,L});
            m[P]=L;
        }
        else if(cmd=="recommend"){
            cin>>x;
            if(x==1){
                while(s1.find({pq.top().first,pq.top().second})==s1.end()){
                    pq.pop();
                }
                cout<<pq.top().first<<"\n";
            }   
            else if(x==-1){
                while(s1.find({pq2.top().first,pq2.top().second})==s1.end()){
                    pq2.pop();
                }
                cout<<pq2.top().first<<"\n";
            }
        }
        else if(cmd=="solved"){
            cin>>P;
            s1.erase({P,m[P]});
        }
    }
    
    return 0;
} 