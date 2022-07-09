/*
There are N piles where the ith pile consists of Ai stones.

Chef and Chefina are playing a game taking alternate turns with Chef starting first.
In his/her turn, a player can choose any non-empty pile and remove exactly 1 stone from it.

The game ends when exactly 1 pile becomes empty. The player who made the last move wins.
Determine the winner if both players play optimally.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer N denoting the number of piles.
Next line contains N space-separated integers A1,A2,…,AN - denoting the number of stones in each pile.
Output Format
For each test case, output CHEF if Chef wins the game, otherwise output CHEFINA.

Note that the output is case-insensitive i.e. CHEF, Chef, cHeF, and chef are all considered the same.
Sample Input 1 
3
2
2 2
1
10
3
1 5 6
Sample Output 1 
CHEFINA
CHEFINA
CHEF
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int count_odd=0,smallest=arr[0];
	for(int i=0;i<n;i++){
		
			if(arr[i]%2!=0){
				count_odd++;
				}
			if(arr[i]<=smallest){
				smallest=arr[i];
			}

		}
			if(smallest==1){
				cout<<"chef"<<endl;
			}

			else if(count_odd%2==0){
				cout<<"chefina"<<endl;
			}
			else{
				cout<<"chef"<<endl;
			}
		}
	
	return 0;
}
