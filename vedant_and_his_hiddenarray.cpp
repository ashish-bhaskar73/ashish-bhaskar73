#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        if(s%2==0){
            if(n==1){
                cout<<"EVEN"<<endl;
            }
            else{
                cout<<"IMPOSSIBLE"<<endl;
            }
        }
        else{
            if(n%2==0){
               cout<<"EVEN"<<endl;
            }
            else{
                cout<<"ODD"<<endl;
            }
        }
    }
    return 0;
}