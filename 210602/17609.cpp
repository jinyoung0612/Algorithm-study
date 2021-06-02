#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 31

bool isPalindrome(string str){
    int len=str.size();
    for(int i=0; i<str.size()/2; i++){
        if(str[i]!=str[len-i-1]) return false;
    }
    return true;
}
bool isPseudo(string str){
    for(int i=1; i<str.size(); i++){
        string temp=str.substr(0,i);
        if(i<str.size()-1){
             temp+=str.substr(i+1);
        }
        if(isPalindrome(temp)){
            return true;
        }
       
    }
    return false;
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    string str;
    while(T--){
        cin>>str;
        if(isPalindrome(str)){
            cout<<0<<"\n";
        }
        else if(isPseudo(str)){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }

    }
    
    return 0;
} 