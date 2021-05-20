#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 101
int arr[MAX];
int n,m;
int answer=0;
void combination(int start, int depth,int sum){
    
    if(depth==3){
        if(sum<=m){
            answer=max(answer,sum);
        }
        return;
    }
    for(int i=start; i<n; i++){
        combination(i+1, depth+1,sum+arr[i]);
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>n>>m;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    combination(0,0,0);
    cout<<answer;



    return 0;
} 