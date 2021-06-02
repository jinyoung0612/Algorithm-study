#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 31
int N;
int M;
int arr[MAX][MAX];
int check[MAX];
int answer=0;
void combination(int start, int depth){
    if(depth==3){

        int sum=0;
        for(int i=0; i<N; i++){
            int temp=0;
            for(int j=0; j<3; j++){
                temp=max(temp,arr[i][check[j]]);
            }
            sum+=temp;
        }
        answer=max(answer,sum);
        return;
    }

    for(int i=start; i<M; i++){
        check[depth]=i;
        combination(i+1,depth+1);
    }
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

    combination(0,0);
    
    cout<<answer;
    
   
    return 0;
} 