#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 26

int arr[MAX]={3,2,1,2,3,3,3,3,1,1,3,1,3,3,1,2,2,2,1,2,1,1,2,2,2,1};
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin>>str;
    int answer=0;
    for(int i=0; i<str.length(); i++){
        
        answer=(answer+arr[str[i]-'A'])%10;
    }
    if(answer%2==0){
        cout<<"You're the winner?";
    }
    else{
        cout<<"I'm a winner!";
    }


    return 0;
} 