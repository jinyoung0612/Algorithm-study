#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>

using namespace std;
#define MAX 5001

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N,K;
    cin>>N>>K;

    // 1. queue 이용 64ms
    queue<int> q;

    for(int i=1; i<=N; i++){
        q.push(i);
    }
    cout<<"<";

    while(!q.empty()){
        for(int i=0; i<K-1; i++){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }
        if(q.size()==1){
            cout<<q.front()<<">";
        }
        else{
            cout<<q.front()<<", ";
        }
        
        q.pop();
    }

    //2. 배열 이용 0ms
    int arr[MAX];
    for(int i=1; i<=N; i++){
        arr[i]=i;
    }
    int cur=0;
    cout<<"<";
    while(N>0){
        cur=(cur+K)%N;
        if(cur==0) cur=N;
        if(N==1){
            cout<<arr[1]<<">";
        }
        else{
            cout<<arr[cur]<<", ";
            for(int i=cur; i<N; i++){
                arr[i]=arr[i+1];
            }
            cur-=1;
        }
        N-=1;
    }

    return 0;
} 