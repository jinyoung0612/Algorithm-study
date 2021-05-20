#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int arr[15];

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int money;
    cin>>money;
    int jun=money;
    int s1=0;
    int sung=money;
    int s2=0;

    for(int i=0; i<14; i++){
        cin>>arr[i];
    }

    for(int i=0; i<14; i++){
        if(jun==0) continue;
        if(jun/arr[i]>0){
            s1+=(jun/arr[i]);
            jun-=((jun/arr[i])*arr[i]);
        }
    }

     for(int i=3; i<14; i++){
        
        if((arr[i-3]>arr[i-2])&&(arr[i-2]>arr[i-1])){
            s2+=(sung/arr[i]);
            sung-=((sung/arr[i])*arr[i]);
        }
        if((arr[i-3]<arr[i-2])&&(arr[i-2]<arr[i-1])){
            sung+=(s2*arr[i]);
            s2=0;
        }
    }

    jun+=(s1*arr[13]);
    sung+=(s2*arr[13]);

    if(jun>sung){
        cout<<"BNP";
    }
    else if(jun<sung){
        cout<<"TIMING";
    }
    else{
        cout<<"SAMESAME";
    }

    return 0;
} 