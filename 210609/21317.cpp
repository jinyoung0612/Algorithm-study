#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 21
int arr[MAX][2];
int N,K;
int answer=987654321;

void jump(int sum, int dest, bool bigJump){
    if(dest==N){
        answer=min(answer,sum);
        return;
    }
    if(dest>N) return;

    jump(sum+arr[dest][0],dest+1,bigJump);
    jump(sum+arr[dest][1],dest+2,bigJump);

    if(!bigJump){
        jump(sum+K,dest+3,true);
    }

}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    cin>>N;
    for(int i=1; i<N; i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    cin>>K;
    jump(0,1,false);
    cout<<answer;
    return 0;
} 