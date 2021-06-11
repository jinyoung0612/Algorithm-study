#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 1000001

int coin[MAX];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N,K;
    cin>>N>>K;

    for(int i=0; i<N; i++){
        cin>>coin[i];            
    }
    
    int answer=0;
    for(int i=N-1; i>=0; i--){
        if(K==0){
            break;
        }
        if(coin[i]<=K){
            answer+=(K/coin[i]);
            K=K%coin[i];
        }
    }
    cout<<answer;

    
    

 
    return 0;
} 