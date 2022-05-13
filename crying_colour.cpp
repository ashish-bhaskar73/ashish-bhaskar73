#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    int arr[3][3];
    for(int i=0;i<3;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    if(arr[0][0]==n&&arr[1][1]==n&&arr[2][2]==n){
        cout<<0<<endl;
        continue;
    } 
    int a=arr[1][0]+arr[2][0]+arr[2][1];
    int b=arr[0][1]+arr[0][2]+arr[1][2];
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
    
    }
    return 0;    
}