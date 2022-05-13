/*
JJ loves playing with averages. He has an array A of length N. He wants to divide the array A into two non-empty subsets P and Q such that the value of mean(P)+mean(Q) is as large as possible. (Note that each Ai must belong to either subset P or subset Q).

Help him find this maximum value of mean(P)+mean(Q).

As a reminder, the mean of a subset X of size M is defined as: mean(X)=∑Mi=1XiM.

For example, mean([3,1,4,5])=3+1+4+54=3.25.

Input Format
The first line contains T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.
Output Format
Output the largest value of mean(P)+mean(Q).

Your answer is considered correct if its absolute or relative error does not exceed 10−6.

Formally, let your answer be a, and the jury's answer be b. Your answer is accepted if and only if |a−b|max(1,|b|)≤10−6.
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *a=new int(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
    
    int p = n/2;
    int q=n-p;
    int firstsum=0,secondsum=0;
    for(int i=0;i<n;i++){
    	if(i<p){
    	firstsum+=a[i];
                }
                else{
                	secondsum+=a[i];
                	count
                }    
                        }
                        int meanfirst=firstsum/p, meansecond=secondsum/q;
                        int maxmean=meanfirst+meansecond;
 cout<<maxmean<<endl;
}
    return 0;
}