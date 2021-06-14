#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 501
int N,M;
int arr[MAX][MAX];

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int sx[4][4]={{0,0,0,-1},{0,1,2,1},{0,0,0,1},{0,-1,0,1}};
int sy[4][4]={{0,1,2,1},{0,0,0,1},{0,1,2,1},{0,1,1,1}};
bool visited[MAX][MAX];

int answer=0;

void dfs(int x, int y, int depth, int sum){
    
    if(depth==4){
        answer=max(answer,sum);
        return;
    }

    for(int i=0; i<4; i++){
        int nx=x+dx[i];
        int ny=y+dy[i];

        if(nx<0 || nx>=N || ny<0 || ny>=M) continue;
        if(!visited[nx][ny]){
            visited[nx][ny]=1;
            dfs(nx,ny,depth+1,sum+arr[nx][ny]);
            visited[nx][ny]=0;
        }
    }
}

// 1. 배열 이용 ㅗ 체크: 76ms
void check(int x, int y){
    
    for(int i=0; i<4; i++){
        int temp=0;
        for(int j=0; j<4; j++){
            int nx=x+sx[i][j];
            int ny=y+sy[i][j];

            if(nx<0 || nx>=N || ny<0 || ny>=M){
                break;
            }
            else{
                temp+=arr[nx][ny];
                answer=max(answer,temp);
            }
        }
    }
}

// 2. 조건문 이용 ㅗ 체크: 72ms
void check2(int x, int y){
    int temp=0;

    if(x>=1&&y>=1&&y<M-1){
        temp=max(temp,arr[x][y]+arr[x-1][y]+arr[x][y-1]+arr[x][y+1]);
    }
    if(y<M-1&&x>=1&&x<N-1){
        temp=max(temp,arr[x][y]+arr[x-1][y]+arr[x+1][y]+arr[x][y+1]);
    }
    if(x<N-1&&y>=1&&y<M-1){
        temp=max(temp,arr[x][y]+arr[x][y-1]+arr[x][y+1]+arr[x+1][y]);
    }
    if(y>=1&&x>=1&&x<N-1){
        temp=max(temp,arr[x][y]+arr[x-1][y]+arr[x+1][y]+arr[x][y-1]);
    }
    answer=max(temp,answer);
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N>>M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
           if(!visited[i][j]){
               visited[i][j]=1;
               dfs(i,j,1,arr[i][j]);
               visited[i][j]=0;
            //    check(i,j);
               check2(i,j);
           }
        }
    }
    cout<<answer;
    

    
   
    return 0;
} 