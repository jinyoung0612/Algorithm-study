#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

void Reverse(string str){
    
    for(int i=str.size()-1; i>=0; i--){
        cout<<str[i];
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    getline(cin,str);

    string temp="";
    for(int i=0; i<str.size(); i++){
        if(str[i]==' '){
            Reverse(temp);
            cout<<" ";
            temp="";
        }
        else if(str[i]=='<'){
            if(temp.size()>0){
                Reverse(temp);
                temp="";
            }
            int idx=i;
            while(str[idx]!='>'){
                cout<<str[idx++];
            }
            cout<<">";
            i+=(idx-i);
        }
        else{
            temp+=str[i];
        }
    }
    Reverse(temp);

    return 0;
} 