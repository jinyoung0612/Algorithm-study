#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;

    vector<int> v;
    for(int i=0; i<N; i++){
        v.push_back(i+1);
        
    }

    vector<int> tmp;
    while(v.size()!=1){
        for(int i=0; i<v.size(); i++){
            if(i%2==1){
                tmp.push_back(v[i]);
            }
        }
        v=tmp;
        tmp.clear();
            
    }

    cout<<v[0];

    
    
   
    return 0;
} 