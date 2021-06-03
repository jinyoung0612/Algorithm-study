#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 17
int N;
string str;
int Select[MAX];
vector<pair<int,string>> book;
bool flag=false;
int answer=987654321;

void combination(int start, int depth, int n){
    if(depth==n){
        int money=0;
        string temp="";
        string Str=str;
        for(int i=0; i<n; i++){
            temp+=book[Select[i]].second;
            money+=book[Select[i]].first;
        }

        for(int i=0; i<temp.size(); i++){
            for(int j=0; j<Str.size(); j++){
                if(temp[i]==Str[j]){
                    temp.erase(i,1);
                    Str.erase(j,1);
                    i--;
                    j--;
                }
            }
            if(Str.size()==0){
                flag=true;
                answer=min(money,answer);
                return;
            }
        }
        
        return;
    }
    for(int i=start; i<N; i++){
        Select[depth]=i;
        combination(i+1,depth+1,n);
    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    cin>>str;
   
    cin>>N;
    int price;
    string name;
    
    for(int i=0; i<N; i++){
        cin>>price>>name;
        book.push_back({price,name});
    }

    for(int i=1; i<=N; i++){
            combination(0,0,i);
    }
    
    if(flag){
        cout<<answer;     
    }
    else cout<<-1;

    return 0;
}