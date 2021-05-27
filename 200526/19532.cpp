#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c,d,e,f;
    
    cin>>a>>b>>c>>d>>e>>f;

    // 1. for문 4ms
    for(int x=-999; x<=999; x++){
        for(int y=-999; y<=999; y++){
            if((a*x+b*y==c)&&(d*x+e*y==f)){
                cout<<x<<" "<<y<<"\n";
                break;
            }
        }
    }
    
    // 2. 연립방정식 해 공식 0ms
    int x=(c*e-b*f)/(a*e-b*d);
    int y=(c*d-a*f)/(b*d-a*e);
    cout<<x<<" "<<y;
    
    return 0;
} 