#include <bits/stdc++.h>

using namespace std;

int pd[1005][1005];

int lcs(string X, string Y, int m, int n)
{
	if(pd[m][n]!= - 1)
	{
		return pd[m][n];
	}
    if(m == 0 || n == 0)
    {
        return 0;
	}
    if(X[m - 1] == Y[n - 1])
    {
		pd[m][n]=1 + lcs(X, Y, m - 1, n - 1);
		return pd[m][n];
	}
	pd[m][n]=max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
    return pd[m][n];
}

int main()
{
	string x, y;
	while(getline(cin,x))
	{
		getline(cin,y);
		int m=x.size();
		int n=y.size();
		for(int i=1; i<=m; i++)
		{
			for(int j=1; j<=n; j++)
			{
				pd[i][j]= - 1;
			}
		}
		cout<<lcs(x, y, m, n)<<endl;
	}
}
