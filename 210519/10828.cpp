#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 10001

int st[MAX];
int top=-1;

void Push(int x){
    st[++top]=x;
}
void Top(){
    if(top==-1){
        cout<<-1<<"\n";
    }
    else{
        cout<<st[top]<<"\n";
    }
}
void Pop(){
    if(top==-1){
        cout<<-1<<"\n";
    }
    else{
        cout<<st[top--]<<"\n";
    }
}
void Size(){
    cout<<top+1<<"\n";
}
void isEmpty(){
    if(top==-1){
        cout<<1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin>>N;

    string str;
    while(N--){
        cin>>str;
        if(str=="push"){
            int num;
            cin>>num;
            Push(num);

        }
        else if(str=="top"){
            Top();
        }
        else if(str=="size"){
            Size();
        }
        else if(str=="empty"){
            isEmpty();
        }
        else if(str=="pop"){
            Pop();
        }
    }
   

    return 0;
} 