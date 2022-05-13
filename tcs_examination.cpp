/*
input formet
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers denoting the scores of Dragon in DSA, TOC and DM respectively.
The second line of each test case contains three space-separated integers denoting the scores of Sloth in DSA, TOC and DM respectively.
Output Format
For each test case, if Dragon got a better rank then output "Dragon", else if Sloth got a better rank then output "Sloth". If there was a tie then output "Tie". Note that the string you output should not contain quotes.
The output is case insensitive. For example, If the output is "Tie" then "TiE", "tiE", "tie", etc are also considered correct.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int DSA1,TOC1,DM1,DSA2,TOC2,DM2;
        cin>>DSA1>>TOC1>>DM1;
        cin>>DSA2>>TOC2>>DM2;
        int total1,total2;
        total1=DSA1+TOC1+DM1;
        total2=DSA2+TOC2+DM2;
        if(total1==total2){
            if(DSA1>DSA2){
                cout<<"dragon"<<endl;
            }
            else if(DSA2>DSA1){
                cout<<"sloth"<<endl;
            }
            else{
                  if(TOC1>TOC2){
                cout<<"dragon"<<endl;
            }
            else if(TOC2>TOC1){
                cout<<"sloth"<<endl;
            }
            else{
                  if(DM1>DM2){
                cout<<"dragon"<<endl;
            }
            else if(DM2>DM1){
                cout<<"sloth"<<endl;
            }
            else{
                cout<<"tie"<<endl;
            }
            }

            }
        }
        else if(total1>total2){
            cout<<"dragon"<<endl;
        }    
        else{
            cout<<"sloth"<<endl;
        }
    }
    return 0;
}