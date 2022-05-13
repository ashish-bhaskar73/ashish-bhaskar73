#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int t;
    cin>>t;
    while(t--){
         int xa,xb,xc;
    cin>>xa>>xb>>xc;
    if(xa>xb&&xa>xc&&xa>50){
        cout<<"a"<<endl;
    }
    else if(xb>xc&&xb>50){
        cout<<"b"<<endl;
    }
    else if(xc>50){
        cout<<"c"<<endl;
    }
    else{
        cout<<"nota"<<endl;
    }}
    return 0;
}