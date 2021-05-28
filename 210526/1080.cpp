#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 51
char A[MAX][MAX];
char B[MAX][MAX];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N,M;
    cin>>N>>M;
    string str;
    for(int i=2; i<2+N; i++){
        cin>>str;
        for(int j=2; j<2+M; j++){
            A[i][j]=str[j-2];
        }
    }

     for(int i=2; i<2+N; i++){
        cin>>str;
        for(int j=2; j<2+M; j++){
            B[i][j]=str[j-2];
        }
    }
    
    

    return 0;
} 