#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int buylest=0;
		while(m<n)
		{
			m++;
			buylest++;
		}
		int buyright=n;
		cout<<(buylest+buyright)<<endl;

		//pair(n,m);
		//cout<<pair<<endl;
	}
	return 0;
}
//3
//2 4
//6 0
//4 3