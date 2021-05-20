#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
#define MAX 21
int N;
int arr[MAX][MAX];
int check[MAX];
int answer=10000;

void combination(int start, int depth, int n){
    if(depth==n){
        int start=0;
        int link=0;
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(check[i]&&check[j]){
                    start+=arr[i][j];
                }
                if(!check[i]&&!check[j]){
                    link+=arr[i][j];
                } 
            }
        }
       
        answer=min(abs(start-link),answer);
        return;
    }

    for(int i=start; i<N; i++){
        if(!check[i]){
            check[i]=1;
            combination(i+1,depth+1,n);
            check[i]=0;
        }
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1; i<=N/2; i++){
        memset(check,false,sizeof(check));
        combination(0,0,i);
    }    
    cout<<answer;

    return 0;
} 