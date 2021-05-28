#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX 2000001
int front=-1;
int rear=-1;
int queue[MAX];

void push(int x){
    queue[++rear]=x;
}
void pop(){
    if(front==rear){
        cout<<-1<<"\n";
    }
    else{
        cout<<queue[++front]<<"\n";
    }
}
void Size(){
    if(front==rear){
        cout<<0<<"\n";
    }
    else{
        cout<<rear-front<<"\n";
    }
}
void empty(){
    if(front==rear){
        cout<<1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
}
void Front(){
    if(front==rear) cout<<-1<<"\n";
    else cout<<queue[front+1]<<"\n";
}
void back(){
    if(front==rear) cout<<-1<<"\n";
    else cout<<queue[rear]<<"\n";
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
            push(num);

        }
        else if(str=="front"){
            Front();
        }
        else if(str=="back"){
            back();
        }
        else if(str=="size"){
            Size();
        }
        else if(str=="empty"){
            empty();
        }
        else if(str=="pop"){
            pop();
        }
    }
    return 0;
} 