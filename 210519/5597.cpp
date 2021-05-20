#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int student[31];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int num;
    for(int i=0; i<28; i++){
        cin>>num;
        student[num]=1;
    }
    vector<int> v;
     for(int i=1; i<=30; i++){
       if(student[i]==0){
           v.push_back(i);
       }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<"\n"<<v[1];

   

    return 0;
} 