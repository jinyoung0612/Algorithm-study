#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 31
int dp[MAX][MAX];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    int N,M;
    dp[1][0]=1;
    dp[1][1]=1;

    for(int i=2; i<MAX; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                dp[i][j]=1;
            }
            else{
                dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]);
            }
        }
    }
    while(T--){
        cin>>N>>M;
        cout<<dp[M][N]<<"\n";
        
    }
    
    
    

    return 0;
} 