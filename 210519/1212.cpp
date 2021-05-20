#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string str;
    cin>>str;
    string num;
  
    for(int i=0; i<str.size(); i++){
       if(str[i]=='0'){
            if(i==0){
                cout<<'0';
            }
            else{
                cout<<"000";
            }
       }
       else if(str[i]=='1'){
           if(i==0){
               cout<<'1';
           }
           else{
               cout<<"001";
           }
       }
       else if(str[i]=='2'){
           if(i==0){
               cout<<"10";
           }
           else{
               cout<<"010";
           }
       }
       else if(str[i]=='3'){
           if(i==0){
               cout<<"11";
           }
           else{
               cout<<"011";
           }
       }
       else if(str[i]=='4') cout<<"100";
       else if(str[i]=='5') cout<<"101";
       else if(str[i]=='6') cout<<"110";
       else if(str[i]=='7') cout<<"111";
    }
   


    return 0;
} 