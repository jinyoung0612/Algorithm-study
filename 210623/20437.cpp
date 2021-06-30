#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 26
vector<int> arr[MAX];


int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    string w;
    int k;
    
    while(T--){
        cin>>w>>k;
        int min_len=987654321;
        int max_len=0;
        bool flag=false;
        for(int i=0; i<MAX; i++){
            arr[i].clear();
        }
        for(int i=0; i<w.size(); i++){
            arr[w[i]-'a'].push_back(i);
        }
        for(int i=0; i<MAX; i++){
            if(arr[i].size()>=k){
                for(int j=0; j+k-1<arr[i].size(); j++){
                    flag=true;
                    int len=arr[i][j+k-1]-arr[i][j]+1;
                    max_len=max(max_len,len);
                    min_len=min(min_len,len);
                }
            }
        }
        if(flag){
             cout<<min_len<<" "<<max_len<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
       
        
    }


    return 0;
} 