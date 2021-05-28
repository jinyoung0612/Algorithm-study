#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stack>
using namespace std;


bool isVPS(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='('){
            s.push(str[i]);
        }
        else{
            if(!s.empty()&&s.top()=='('){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
    }
    if(s.empty()) return true;
    else return false;
}

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;

    string str;

    while(T--){
        cin>>str;
        if(isVPS(str)){
            cout<<"YES\n";
        }
        else{   
            cout<<"NO\n";
        }
    }
    
    
    
    
    

    return 0;
} 