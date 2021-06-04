#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 51
int seq[MAX];
int N;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>seq[i];
    }
    sort(seq,seq+N);
    
    int answer=-1;
    
    if(N<=2){
        answer=N;
    }
    else{
        
        for(int size=3; size<=N; size++){
            for(int start=0; start<=N-size; start++){
                bool flag=true;
                for(int i=start+2; i<start+size; i++){
                    if(seq[start]+seq[start+1]<=seq[i]){
                        flag=false;
                        break;
                    }
                }
                if(flag) answer=size;
            }
        }
    }
    if(answer==-1){
        cout<<2;
    }
    else{
        cout<<answer;
    }

    
    
   
    
    
    return 0;
} 