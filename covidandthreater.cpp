#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
        //n is no of rows
        // mis no of seat
	    int count =0;
	    while(n>0){
            int temp=m;

	     while(temp>0){
	         count++;
	         temp-=2;
	     }
	     n-=2;
	    }
	  cout<<count<<endl;
	}
	return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (j > n)
            {
                break;
            }

            int a[m];
            for (int i = 0; i < m; i++)
            {
                if (i >= m)
                {
                    break;
                }
                count++;
                i++;
            }
            j++;
        }
        cout << count << endl;
    }

    return 0;
}*/