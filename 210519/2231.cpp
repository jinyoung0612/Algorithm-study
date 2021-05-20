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

    int answer=0;
    for(int i=0; i<n; i++){
        
        int sum=i;
        int temp=i;
        while(temp){
            sum+=(temp%10);
            temp/=10;
        }

        if(sum==n){
           answer=i;
           break;
        }
        
    }
    cout<<answer;
    



    return 0;
} 