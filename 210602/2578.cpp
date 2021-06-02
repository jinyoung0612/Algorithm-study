#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 31

int board[5][5];

void checking(int num){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(board[i][j]==num){
                board[i][j]=-1;
                break;
            }
        }
    }
}

bool isBingo(){

    int cnt=0;

    for(int i=0; i<5; i++){
        bool flag=true;
        bool flag2=true;

        for(int j=0; j<5; j++){
            if(board[i][j]!=-1){
                flag=false;
            }
            if(board[j][i]!=-1){
                flag2=false;
            }
        }
        if(flag) cnt++;
        if(flag2) cnt++;
    }

    bool flag3=true;
    bool flag4=true;
    for(int i=0; i<5; i++){
        if(board[i][i]!=-1) flag3=false;
        if(board[i][4-i]!=-1) flag4=false; 
    }
    if(flag3) cnt++;
    if(flag4) cnt++;

    if(cnt>=3) return true;
    else return false;

}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>board[i][j];
        }
    }

    int num;
    int answer=0;
    bool flag=false;
    
    for(int i=0; i<25; i++){
        cin>>num;
        checking(num);
        if(isBingo()&&!flag){
            flag=true;
            answer=i+1;
        }
        
    }
     cout<<answer<<"\n";
   
    return 0;
} 