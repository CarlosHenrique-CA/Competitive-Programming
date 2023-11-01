#include <bits/stdc++.h>
using namespace std;

int pai[100005][32];

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k, n, s;
	    cin>>n>>k>>s;
	    int v[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>v[i];
	    }
	    int j= 0;
	    int cur=0;
	    for(int i=0; i<n; i++)
	    {
	        while(j<n && v[j] + cur <=s)
	        {
	            //j++;
	            cur+=v[j];
	            j++;
	        }
	        cur-=v[i];
	        pai[i][0]=j;
	    }
	    pai[n][0]=n;
	    for(int j=1; j<32; j++)
	    {
	        for(int i=0; i<=n; i++)
	        {
	            pai[i][j]=pai[pai[i][j - 1]][j - 1];
	        }
	    }
	    int r=0;
	    for(int i=0; i<n; i++)
	    {
	        int cur=i;
	        for(int j=31; j>=0; j--)
	        {
	            if(k&(1<<j))
	            {
	                cur=pai[cur][j];
	            }
	        }
	        r=max(r, cur - i);
	    }
	    cout<<r<<endl;
	}
}


