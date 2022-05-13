#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
        //n is no apple
        //m is no of orange
        //k is gold coins
	    cin>>n>>m>>k;
	    while(k!=0){
	    if(n>m){
	       m++;
	       k--;
	    }
	    else{
	        n++;
	        k--;
	    }
	    }
	    int diff;
	    diff=abs(n-m);
	    cout<<diff<<endl;
	}
	return 0;
}
