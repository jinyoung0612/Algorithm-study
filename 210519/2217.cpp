#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 100001
int arr[MAX];
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+N);

    int answer=0;
    for(int i=0; i<N; i++){
        answer=max(answer,(arr[i]*(N-i)));
    }

    cout<<answer;
    return 0;
} 