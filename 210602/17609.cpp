#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 31
string str;
bool isPalindrome(string str){
    int len=str.size();
    for(int i=0; i<str.size()/2; i++){
        if(str[i]!=str[len-i-1]) return false;
    }
    return true;
}
bool isPseudo(int start, int end, bool check){
    
    if(start>end) return true;
    if(str[start]==str[end]) return isPseudo(start+1,end-1,check);
    else if(check) return isPseudo(start+1,end,false)|isPseudo(start,end-1,false);
    else return false;

}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    string in;
    while(T--){
        cin>>in;
        str=in;
        if(isPalindrome(str)){
            cout<<0<<"\n";
        }
        else if(isPseudo(0,str.size()-1,1)){
            cout<<1<<"\n";
        }
        else{
            cout<<2<<"\n";
        }
    }
    
    return 0;
} 