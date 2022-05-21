#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr=new int[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		int count;
		if(n==1){
			cout<<"0"<<endl;
		}
			else{
	for (int i = 1; i < n; i++)
				{
					if(arr[i]!=0){
						count=i;
					}
					
				}
					cout<<count<<endl;			
	}

		}
		return 0;
	}

