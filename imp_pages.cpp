#include<iostream>
using namespace std;
void link(int i,int j){
if(i==0 ){
	cout<<"https://www.codechef.com/practice"<<endl;
}
else if(i==1 &&j==0){
	cout<<"https://www.codechef.com/contests"<<endl;
}
else{
	cout<<"https://discuss.codechef.com"<<endl;
}
	

	return ;
}
int main(){
	int a,b;
	cin>>a>>b;
	link(a,b);
	return 0;
}