#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 11
int arr[3];
int N,K;
int answer=0;

void dfs(int sum){
   
   if(sum>N) return;
   if(answer<=sum) answer=sum;
   
   for(int i=K-1; i>=0; i--){
       dfs(sum*10+arr[i]);
   }
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);


    cin>>N>>K;

    for(int i=0; i<K; i++){
        cin>>arr[i];
    }

    dfs(0);
    cout<<answer;

    return 0;
} 