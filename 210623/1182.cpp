#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 21
int arr[MAX];
int N,S;
int answer=0;
void findSeq(int depth, int sum){
    if(depth>=N) return;
    if(sum+arr[depth]==S){
        answer+=1;
    }

    findSeq(depth+1,sum+arr[depth]);
    findSeq(depth+1,sum);
    
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>N>>S;

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    findSeq(0,0);
    cout<<answer;
    
    

    return 0;
} 