#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
#define MAX 17

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    deque<int> dq;
    for(int i=1; i<=N; i++){
        dq.push_back(i);
    }
    while(1){
        if(dq.size()==1){
            cout<<dq.front();
            break;
        }
        dq.pop_front();

        if(dq.size()==1){
            cout<<dq.front();
            break;
        }
        
        int temp=dq.front();
        dq.pop_front();
        dq.push_back(temp);


    }
    

    return 0;
}