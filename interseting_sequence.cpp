#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
        ll y=0;
        while(x%2==0){
            x=x/2;
            y++;
        }
        cout<<y<<endl;
    }
    return 0;
}
/*
#include<bits.stdc++.h>
using namespace std;
int getXOR(int x, int y) {
  int ans = 0;
  for (int i = 0; i <= 31; i++) {
    if (((1 LL << i) & x) != ((1 LL << i) & y)) {
      ans |= (1 LL << i);
    }
  }
  return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        getXOR()

    }
}
*/