#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAX 26
int arr[MAX];
bool check(string str,int K){
    memset(arr,0,sizeof(arr));
    for(int i=0; i<str.size(); i++){
        arr[str[i]-'a']+=1;
        if(arr[str[i]-'a']==K){
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
    string w;
    int k;
    
    while(T--){
        cin>>w>>k;
        int start=0;
        int end=0;
        string temp1=""+w[0];
        string temp2="";
        int answer1=10001;
        int answer2=0;

        while(start<=end&&end<w.size()){
            // temp1이 조건3 만족하는 문자열이라면
            if(check(temp1,k)){
                cout<<temp1<<" ";
                answer1=min(answer1,(int) temp1.size());
                temp1=temp1.substr(1);
                start+=1;
            }
            else{
                temp1+=w[++end];    
            }
        }

        
    }


    return 0;
} 