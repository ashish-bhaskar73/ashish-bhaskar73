#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string strpy;
		cin>>strpy;
		int count=0;
		for(int i=0;i<n/2;i++){
			if(strpy[i]!=strpy[n-i-1]){
            //   strpy[i]=strpy[n-i-1]=1;
				count++;
			}
		}
		cout<<(count+1)/2<<endl;

	}
	return 0;
}
