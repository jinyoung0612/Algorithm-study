#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
#define MAX 1000001

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin>>T;
    int n;

    while(T--){
        cin>>n;
        int max_val=-MAX;
        int min_val=MAX;
        int num;
        for(int i=0; i<n; i++){
            cin>>num;
            max_val=max(max_val,num);
            min_val=min(min_val,num);
        }
        cout<<min_val<<" "<<max_val<<"\n";
    }

    return 0;
} 