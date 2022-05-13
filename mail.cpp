#include<iostream>
using namespace std;
void mail(int i,int j){
	int send;
send=i-j;
cout<<send<<endl;
return;
}
int main(){
	int n,u;
	cin>>n>>u;
	/*int send=n-u;
	cout<<send<<endl;*/
	mail(n,u);
	return 0;
}