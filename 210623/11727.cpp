#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 1001
#define mod 10007
int dp[MAX];
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    dp[1]=1;
    dp[2]=3;

    for(int i=3; i<=n; i++){
        dp[i]=(dp[i-1]+dp[i-2]*2)%mod;
    }
    cout<<dp[n]%mod;

    
    
    return 0;
} 