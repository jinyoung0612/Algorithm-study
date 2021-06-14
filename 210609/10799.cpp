#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stack>
using namespace std;
#define MAX 201

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin>>str;
    stack<char> st;
    int answer=0;

    for(int i=0; i<str.size(); i++){
       if(str[i]=='('){
            st.push(str[i]);
       }
       else{
           st.pop();

           if(str[i-1]=='('){
               answer+=st.size();
           }
           else{
               answer+=1;
           }
       }
    }
    
    cout<<answer;
    
    
 
    return 0;
} 