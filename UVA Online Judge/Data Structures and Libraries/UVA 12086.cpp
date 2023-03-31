#include <bits/stdc++.h>

using namespace std;

const long int maxn=200005;
long long int ft[maxn];

void upd(long long int i, long long int x)
{
	for(; i<maxn; i+=i & -i)
	{
		ft[i]+=x;
	}
}

long long int qry(long long int i)
{
	long long int s=0;
	for(; i; i-=i & -i)
	{
		s+=ft[i];
	}
	return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
	long long int t;
	int a=0;
	while(cin>>t && t!=0)
	{
	    memset(ft, 0, sizeof(ft));
	    if(a!=0)
	    {
	        cout<<endl;
	    }
	    cout<<"Case "<<++a<<":"<<endl;
	    for(int i=0; i<t; i++)
	    {
	        long long int x;
	        cin>>x;
	        upd(i + 1, x);
	    }
	    string m;
	    while(cin>>m && m!="END")
	    {
	        long long int x, y;
	        cin>>x>>y;
	        if(m=="S")
	        {
	            long long int res=qry(x - 1) - qry(x);
	            upd(x, y + res);
	        }
	        else
	        {
	            long long int uy=qry(y) - qry(x - 1);
	            cout<<uy<<endl;
	        }
	    }
	}
}
