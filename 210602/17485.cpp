#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 1001
#define INF 987654321
int N,M;
int space[MAX][MAX];
int dp[MAX][MAX][3];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N>>M;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>space[i][j];
        }
    }

    for(int i=0; i<M; i++){
       dp[0][i][0]=space[0][i];
       dp[0][i][1]=space[0][i];
       dp[0][i][2]=space[0][i];
    }
    
    for(int i=0; i<N; i++){
        dp[i][0][2]=INF;
        dp[i][M-1][0]=INF;
    }
    
    for(int i=1; i<N; i++){
        for(int j=0; j<M; j++){
            if(j==0){
                dp[i][j][0]=min(dp[i-1][j+1][1],dp[i-1][j+1][2])+space[i][j];
                dp[i][j][1]=min(dp[i-1][j][0],dp[i-1][j][2])+space[i][j];
            }
            else if(j==M-1){
                dp[i][j][1]=min(dp[i-1][j][2],dp[i-1][j][0])+space[i][j];
                dp[i][j][2]=min(dp[i-1][j-1][1],dp[i-1][j-1][0])+space[i][j];
            }
            else{
                dp[i][j][0]=min(dp[i-1][j+1][1],dp[i-1][j+1][2])+space[i][j];
                dp[i][j][1]=min(dp[i-1][j][2],dp[i-1][j][0])+space[i][j];
                dp[i][j][2]=min(dp[i-1][j-1][1],dp[i-1][j-1][0])+space[i][j];
            }
        }
    }

    int answer=INF;

    for(int i=0; i<M; i++){
        for(int j=0; j<3; j++){
            answer=min(answer,dp[N-1][i][j]);
        }
    }
    cout<<answer;

    
    return 0;
} 