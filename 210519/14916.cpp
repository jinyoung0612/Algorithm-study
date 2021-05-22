#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 101

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin>>n;
    int cnt=0;
    int temp=n%5;

    if(n==1 || n==3) cnt=-1;
    else if(temp%2==0){
        cnt=(n/5+temp/2);
    }
    else{
        cnt=((n/5)-1)+((temp+5)/2);
    }
    cout<<cnt;

    return 0;
} 