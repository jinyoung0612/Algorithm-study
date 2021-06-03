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
    int cnt=0;
   
    while(1){
        if(N<0){
            cnt=-1;
            break;
        }
        else if(N%5==0){
                cnt+=(N/5);
                break;
        }
        else{
            cnt++;
            N-=3;
        }
    }
    
    
    cout<<cnt;
    

    return 0;
} 