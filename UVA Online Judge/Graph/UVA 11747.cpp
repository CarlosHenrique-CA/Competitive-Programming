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
		priority_queue<int, vector<int>, greater<int>> q;
		vector<pair<int, pair<int, int>>> v;
		for(int i=0; i<n; i++)
		{
			pai[i]=i;
		}
		for(int i=0; i<m; i++)
		{
			int x, y, z;
			cin>>x>>y>>z;
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
			}
			else
			{
				q.push(v[i].first);
			}
		}
		if(q.size()==0)
		{
			cout<<"forest"<<endl;
		}
		else
		{
			while(q.size()!=0)
			{
				if(q.size()==1)
				{
					cout<<q.top()<<endl;
				}
				else
				{
					cout<<q.top()<<" ";
				}
				q.pop();
			}
		}
	}
}
