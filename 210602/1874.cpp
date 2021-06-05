#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <stack>
using namespace std;

int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    stack<int> st;
    
    int num=1;
    string str="";
    int input;
    
    cin>>N;

    for(int i=0; i<N; i++){
        cin>>input;
        if(st.empty()){
            st.push(num++);
            str+="+";
        }
        if(st.top()<input){
            while(st.top()!=input){
                st.push(num++);
                str+="+";
            }
        }
        if(st.top()==input){
            st.pop();
            str+="-";
        }
    }
    
    if(st.empty()){
        for(int i=0; i<str.size(); i++){
            cout<<str[i]<<"\n";
        }
    }
    else{
        cout<<"NO";
    }
    
    
   

    return 0;
} 