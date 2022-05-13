#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int A1,A2,B1,B2,C1,C2;
	    cin>>A1>>A2>>B1>>B2>>C1>>C2;
	    int sat1,sat2,sat3;
	    sat1=A1+A2;
	    sat2=B1+B2;
	    sat3=C1+C2;
	    if(sat1>sat2&&sat1>sat3){
	        cout<<sat1<<endl;
	    }
	    else if(sat2>sat1&&sat2>sat3){
	        cout<<sat2<<endl;
	    }
	    else{
	        cout<<sat3<<endl;
	    }
	}
	return 0;
}
