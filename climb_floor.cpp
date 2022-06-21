/*
Chef and Chefina are residing in a hotel.

There are 1010 floors in the hotel and each floor consists of 1010 rooms.

Floor 11 consists of room numbers 11 to 1010.
Floor 22 consists of room numbers 1111 to 2020.
\ldots…
Floor ii consists of room numbers 10 \cdot (i-1) + 110⋅(i−1)+1 to 10 \cdot i10⋅i.
You know that Chef's room number is XX while Chefina's Room number is YY.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X, YX,Y, the room numbers of Chef and Chefina respectively.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,floor1,floor2,climb;
	    cin>>x>>y;
	    for(int i=1;i<=10;i++){
	        if(x>=(10*(i-1)+1)&& x<=10*i){
	            floor1=i;
	        }
	        if(y>=(10*(i-1)+1)&& y<=10*i){
	            floor2=i;
	        }
	    }
	   // cout<<"value of floor 2"<<floor2<<endl<<"value of floor 1"<<floor1<<endl;
	    climb=abs(floor2-floor1);
	    cout<<climb<<endl;
	}
	return 0;
}
