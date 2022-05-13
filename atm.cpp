#include<iostream>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
     	int n,k;
     	cin>>n>>k;
     	
     	int *arr=new int[n];
     	for(int i=0;i<n;i++){
     		cin>>arr[i];
     	}
     	for(int i=0;i<n;i++){
     		if(k>=arr[i]){
     			k-=arr[i];
     			cout<<"1";
     		}
     		else{
     			cout<<"0";
     		}
     	}
     }
	return 0;
}
