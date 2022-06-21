/*
For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
Given a binary string SS of length NN (NN is even), find the encoded sequence.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains two lines of input.
First line contains a single integer NN, the length of the sequence.
Second line contains binary string SS of length NN.
Output Format
For each test case, output in a single line the encoded sequence.
*/
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<string>encode ;
	    for(int i=0;i<n;i+=2){
	        if(s[i]=='0' & s[i+1]=='0'){
	            encode.push_back("A");
	        }
	        else if(s[i]=='0'&& s[i+1]=='1'){
	            encode.push_back("T");
	        }
	        else if(s[i]=='1' && s[i+1]=='0'){
	            encode.push_back("C");
	        }
	        else{
	            encode.push_back("G");
	        }
	    }
	    for(int i=0;i<encode.size();i++){
	        cout<<encode[i];
	    }
	    cout<<endl;
	}
	return 0;
}
