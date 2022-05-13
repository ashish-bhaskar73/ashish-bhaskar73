#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
           int k;
           cin>>k;
           int discard=0;
           int rem;
           rem=52%k;
           discard+=rem;
           cout<<discard<<endl;
    }
    return 0;
}