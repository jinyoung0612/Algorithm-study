#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define MAX 1001
string arr[MAX];
int N;
int M;

bool cmp(pair<char,int> p1, pair<char,int> p2){
    if(p1.second==p2.second) return p1.first<p2.first;
    return p1.second>p2.second;
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin>>N>>M;

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    
    
    string str="";
    int dist=0;
    for(int i=0; i<M; i++){
        vector<pair<char,int> > v;
        v.push_back({'T',0});
        v.push_back({'A',0});
        v.push_back({'G',0});
        v.push_back({'C',0});

        for(int j=0; j<N; j++){

            if(arr[j][i]=='T'){
                v[0].second+=1;
            }
            else if(arr[j][i]=='A'){
                v[1].second+=1;
            }
            else if(arr[j][i]=='G'){
                v[2].second+=1;
            }
            else if(arr[j][i]=='C'){
                v[3].second+=1;
            }
        }
        
        sort(v.begin(),v.end(),cmp);
        str+=v[0].first;

        for(int j=0; j<N; j++){
            if(arr[j][i]!=str[i]) dist++;
        }

    }
    
    cout<<str<<"\n"<<dist;

    return 0;
} 