#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 10001
int deque[MAX];
int front=0;
int rear=-1;
void push_back(int x){
    deque[++rear]=x;
}   
void push_front(int x){
   rear++;
   for(int i=rear; i>0; i--){
       deque[i]=deque[i-1];
   }
   deque[0]=x;

}
void pop_front(){
   
    if(rear<0) cout<<-1<<"\n";
    else{
        cout<<deque[0]<<"\n";
        for(int i=0; i<rear; i++){
            deque[i]=deque[i+1];
        }
        rear-=1;
    }
}
void pop_back(){
    if(rear<0){
        cout<<-1<<"\n";
    }
    else{
        cout<<deque[rear]<<"\n";
        rear-=1;
    }
}
void size(){
    if(rear<0) cout<<0<<"\n";
    else{
        cout<<rear+1<<"\n";
    }
}
void empty(){
    if(rear<0) cout<<1<<"\n";
    else cout<<0<<"\n";
}
void Front(){
    if(rear<0) cout<<-1<<"\n";
    else{
        cout<<deque[0]<<"\n";
    }
}
void Back(){
    if(rear<0){
        cout<<-1<<"\n";
    }
    else{
        cout<<deque[rear]<<"\n";
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    string str;
    int n;
    cin>>N;
    while(N--){
        cin>>str;
        if(str=="push_back"){
            cin>>n;
            push_back(n);
        }
        else if(str=="push_front"){
            cin>>n;
            push_front(n);

        }
        else if(str=="pop_front"){
            pop_front();
        }
        else if(str=="pop_back"){
            pop_back();
        }
        else if(str=="size"){
            size();
        }
        else if(str=="empty"){
            empty();
        }
        else if(str=="front"){
            Front();
        }
        else if(str=="back"){
            Back();
        }
    }

    return 0;
} 