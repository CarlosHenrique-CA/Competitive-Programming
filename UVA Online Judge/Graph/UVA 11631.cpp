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
	int n, m;
	while(cin>>n>>m && (n + m)>0)
	{
		vector<pair<int, pair<int, int>>> v;
		for(int i=0; i<n; i++)
		{
			pai[i]=i;
		}
		int cnt=0, cnt2=0;
		for(int i=0; i<m; i++)
		{
			int x, y, z;
			cin>>x>>y>>z;
			cnt2+=z;
			v.push_back({z,{x, y}});
		}
		sort(v.begin(), v.end());
		for(int i=0; i<m; i++)
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
		cout<<cnt2 - cnt<<endl;
	}
}
