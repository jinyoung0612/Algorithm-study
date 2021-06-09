#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
#define MAX 50001
int dp[MAX];
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        dp[i]=i;
    }

    for(int i=1; i<=sqrt(n); i++ ){
        dp[i*i]=1;
    }

    for(int i=2; i<=n; i++){
        for(int j=1; j<=sqrt(i); j++){
            dp[i]=min(dp[i],dp[j*j]+dp[i-j*j]);
        }
    }
    cout<<dp[n];


    return 0;
} 