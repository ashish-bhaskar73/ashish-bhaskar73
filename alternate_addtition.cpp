#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    if((b-a)%3!=2){
	    	cout<<"yes"<<endl;
	    }
	    else{
	    	cout<<"no"<<endl;
	    }
	
	}
	return 0;
}