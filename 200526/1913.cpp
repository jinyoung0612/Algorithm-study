#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 1000
int arr[MAX][MAX];

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;
    int target;
    cin>>target;

    int num=N*N;

    int x=0;
    int y=0;
    int dir=0;
    
    while(num>1){

        arr[x][y]=num;
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        num--;

        while(1){
            if(nx<0 || nx>=N || ny<0 || ny>=N || arr[nx][ny]){
                nx-=dx[dir];
                ny-=dy[dir];
                num++;
                break;
            }
            arr[nx][ny]=num;
            nx+=dx[dir];
            ny+=dy[dir];
            num--;
        }

        x=nx;
        y=ny;
        dir=(dir+1)%4;

    }

    int tx=0;
    int ty=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<arr[i][j]<<" ";
            if(arr[i][j]==target){
                tx=i+1;
                ty=j+1;
            }
        }
        cout<<"\n";
    }

    cout<<tx<<" "<<ty;

    return 0;
} 