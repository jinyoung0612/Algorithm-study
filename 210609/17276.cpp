#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define MAX 501
int arr[MAX][MAX];
int temp[MAX][MAX];
void rotation(int n, int d){
   
    if(d<0){
        int num=d*(-1)/45;
        while(num--){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    temp[i][j]=arr[i][j];
                }
            }
            for(int i=0; i<n; i++){
                    temp[i][(n+1)/2-1]=arr[i][n-i-1];
                    temp[i][n-i-1]=arr[(n+1)/2-1][n-i-1];
                    temp[(n+1)/2-1][n-i-1]=arr[n-i-1][n-i-1];
                    temp[n-i-1][n-i-1]=arr[n-i-1][(n+1)/2-1];
            }
             for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    arr[i][j]=temp[i][j];
                }
            }
            
        }

    }
    else{
        int num=d/45;
        while(num--){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    temp[i][j]=arr[i][j];
                }
            }
            for(int i=0; i<n; i++){
                    temp[i][(n+1)/2-1]=arr[i][i];
                    temp[i][i]=arr[(n+1)/2-1][i];
                    temp[(n+1)/2-1][i]=arr[n-i-1][i];
                    temp[n-i-1][i]=arr[n-i-1][(n+1)/2-1];     
            }
             for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    arr[i][j]=temp[i][j];
                }
            }
            
        }


    }
}
int main(void){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin>>T;
    int n;
    int d;
    
    while(T--){

        cin>>n>>d;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        rotation(n,d);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

 
    return 0;
} 