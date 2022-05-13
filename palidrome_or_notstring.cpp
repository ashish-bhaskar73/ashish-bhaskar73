/*
It is JJ's birthday and you decide to gift him a string S of length N. But you also know that JJ does not like palindromes so you decide that none of the substrings of S of length ≥2 should be a palindrome.

Can you find any suitable string which can be gifted to JJ?

Recall that a string is called palindrome if it reads the same backwards and forwards, for e.g. noon and level are palindromic strings.

Input Format
The first line contains T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer N - the length of the string S to be constructed.
Output Format
For each test case, output a string S of length N such that none of its substrings (of length ≥2) is a palindrome.

If there are multiple strings which satisfy the condition, print any
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		string p;
		cin>>p;
		string s=p;
reverse(p.begin(),p.end());
         if(p==s){
         	cout<<"yes"<<endl;
         }
         else{
         	cout<<"no"<<endl;
         }
     }
	return 0;
}
/*


#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
   
    cin >>t;
    while(t--){
        int b;
        cin>>b;
        char s[b];
        for(int i='a', j=0 ;j<b; i++){
            if(i=='z'+1){
                i='a';
            }
            s[j]=i;
            j++;
        }
        for(int i=0; i< b; i++){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

*/