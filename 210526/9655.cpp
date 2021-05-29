#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 1001
int dp[MAX];
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin>>N;

    // 1. 홀수, 짝수 구분
    if(N%2==0) cout<<"CY";
    else cout<<"SK";
    
    // 2. DP
    dp[1]=0;
    dp[2]=1;
    dp[3]=0;

    for(int i=4; i<=N; i++){
        dp[i]=!min(dp[i-1],dp[i-3]);
    }

    if(dp[N]==0) cout<<"SK";
    else cout<<"CY";

    return 0;
} 