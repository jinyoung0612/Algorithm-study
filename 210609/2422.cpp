#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 201
int N,M;
int Select[3];
vector<int> icecream[MAX];
int answer=0;

void combination(int start, int depth){
    if(depth==3){
       for(int i=0; i<3; i++){
           int temp=Select[i];
           for(int j=0; j<icecream[temp].size(); j++){
               int num=icecream[temp][j];
               if(i==0){
                   if(num==Select[1]||num==Select[2]) return;
               }
               else if(i==1){
                   if(num==Select[0]||num==Select[2]) return;
               }
               else if(i==2){
                   if(num==Select[0]||num==Select[1]) return;
               }
           }
       }
        answer++;
        return;
    }
    for(int i=start; i<=N; i++){
        Select[depth]=i;
        combination(i+1,depth+1);
    }

}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N>>M;

    int a;
    int b;

    for(int i=0; i<M; i++){
        cin>>a>>b;
        icecream[a].push_back(b);
    }

   
    combination(1,0);
    cout<<answer;
    

   

 
    return 0;
} 