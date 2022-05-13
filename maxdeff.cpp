#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	//int t;
	//cin>>t;
    vector<int>diff;
	//while(t--){
	    int n=2,s=3;
	   // cin>>n>>s;
	   
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=n;j++){
	         if(s==(i+j)){
                  diff.push_back(i-j);
                 cout<<"{"<<i<<","<<j<<"}"<<" ";
	                
	          }
	        }
	    }
        
	    cout<<*max_element(diff.begin(), diff.end())<<endl;
//	}
	return 0;
}
// {0,4}, {1,3}, {2,2}, {3,1} and {4,0}.