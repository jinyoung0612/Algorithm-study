#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first<b.first;
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    int N;
    while(T--){
        cin>>N;
        int a,b;
        vector<pair<int,int>> v;
        for(int i=0; i<N; i++){
            cin>>a>>b;
            v.push_back({a,b});
        }

        sort(v.begin(),v.end(),cmp);
    
        int cnt=1;
        int temp=v[0].second;
        for(int i=1; i<N; i++){
            if(v[i].second<temp){
                cnt++;
                temp=v[i].second;
            }
        }
        cout<<cnt<<"\n";
       
    }

    return 0;
} 