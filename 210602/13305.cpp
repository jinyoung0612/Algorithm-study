#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 100001
long long dist[MAX];
long long price[MAX];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;

    for(int i=0; i<N-1; i++){
        cin>>dist[i];
    }
    for(int i=0; i<N; i++){
        cin>>price[i];
    }
    long long answer=dist[0]*price[0];
    long long cur=price[0];

    for(int i=1; i<N-1; i++){
        cur=min(cur,price[i]);
        answer+=dist[i]*cur;
    }
    cout<<answer;
    
    

    
    
    return 0;
} 