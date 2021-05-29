#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 51

int N,M;
bool A[MAX][MAX];
bool B[MAX][MAX];

void XOR(int x, int y){
    for(int i=x; i<x+3; i++){
        for(int j=y; j<y+3; j++){
            A[i][j]=!A[i][j];
        }
    }
}
bool isSame(){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(A[i][j]!=B[i][j]) return false;
        }
    }
    return true;
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N>>M;
    string str;
    for(int i=0; i<N; i++){
        cin>>str;
        for(int j=0; j<M; j++){
            if(str[j]=='0') A[i][j]=0;
            else A[i][j]=1;
        }
    }

    for(int i=0; i<N; i++){
        cin>>str;
        for(int j=0; j<M; j++){
            if(str[j]=='0') B[i][j]=0;
            else B[i][j]=1;
        }
    }
    

    int cnt=0;
    bool flag=false;

    if(N>=3&&M>=3){
        for(int i=0; i<=N-3; i++){
            for(int j=0; j<=M-3; j++){
                if(A[i][j]!=B[i][j]){
                    XOR(i,j);
                    cnt++;
                }
                if(isSame()){
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }

    }
    else{
        flag=isSame();
    }

    if(flag){
        cout<<cnt;
    }
    else{
        cout<<-1;
    }
    
    return 0;
} 