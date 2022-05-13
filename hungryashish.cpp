/*
It's dinner time. Ashish is very hungry and wants to eat something. He has X rupees in his pocket. Since Ashish is very picky, he only likes to eat either PIZZA or BURGER. In addition, he prefers eating PIZZA over eating BURGER. The cost of a PIZZA is Y rupees while the cost of a BURGER is Z rupees.

Ashish can eat at most one thing. Find out what will Ashish eat for his dinner
Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers X, Y and Z - the money Ashish has, the cost of a PIZZA and the cost of a BURGER.
Output Format
For each test case, output what Ashish will eat. (PIZZA, BURGER or NOTHING).

You may print each character of the string in uppercase or lowercase. (for example, the strings Pizza, pIzZa and piZZa will all be treated as identical).
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if(x>y||x>z){
			if(x>=y){
				cout<<"pizza"<<endl;
			}
			else{
				cout<<"burger"<<endl;
			}
		}
		else{
			cout<<"nothing"<<endl;
		}
	}
	return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
     int x,y,z;
    while(t--){
        cin>>x>>y>>z;
    if(x<y && x<z){
        cout<<"Nothing"<<endl;
    }
    else {
            if(x>=y){
                cout<<"Pizza"<<endl;
            }
            else{
                cout<<"Burger"<<endl;
            }
        }
    }
}
*/
