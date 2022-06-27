
#include <bits/stdc++.h>

using namespace std;

int pai[200005];
int find(int u)
{
	if(pai[u]==u)
	{
		return u;
	}
	return find(pai[u]);
}
int main()
{
	int n;
	int N;
	int a=0;
	while(cin>>N)
	{
		a++;
		if(a!=1)
		{
			cout<<endl;
		}
		for(int i=0; i<=N; i++)
		{
			pai[i]=i;
		}
		vector<pair<double, pair<int, int>>> v;
		int cnt2=0;
		for(int i=1; i<N; i++)
			{
				double x, y, z;
				cin>>x>>y>>z;
				v.push_back({z,{x, y}});
				cnt2+=z;
			}
		cin>>n;
			double cnt=0;
			for(int i=0; i<n; i++)
			{
				double x, y, z;
				cin>>x>>y>>z;
				v.push_back({z,{x, y}});
			}
			cin>>n;
			for(int i=0; i<n; i++)
			{
				double x, y, z;
				cin>>x>>y>>z;
				v.push_back({z,{x, y}});
			}
			sort(v.begin(), v.end());
			for(int i=0; i<v.size(); i++)
			{
				int y=v[i].second.second;
				int x=v[i].second.first;
				int uu=find(y);
				int u=find(x);
				if(u!=uu)
				{
					pai[uu]=u;
					cnt+=v[i].first;
				}
			}
			cout<<cnt2<<endl;
			cout<<cnt<<endl;
	}
}
