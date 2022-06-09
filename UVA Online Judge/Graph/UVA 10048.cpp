#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v[105];
int dist[105];

void bfs(int ini)
{
    dist[ini]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > q;
    q.push({0, ini});
    while(q.size()!=0)
    {
		int u=q.top().second;
		q.pop();
		int aa=v[u].size();
		for(int i=0; i<aa; i++)
		{
			int pa=v[u][i].first;
			int pe=dist[u];
			int maior=0;
			if(pe>maior)
			{
				maior=pe;
			}
			if(v[u][i].second>maior)
			{
				maior=v[u][i].second;
			}
			if(dist[pa]== - 1 ||  dist[pa]>maior)
			{
				if(pe>v[u][i].second)
				{
					dist[pa]=pe;
				}
				else
				{
					dist[pa]=v[u][i].second;
				}	
				q.push({dist[pa], pa});
			}
		}
	}
}

int main()
{
	int n, m, N;
	int cnt=0;
	while(cin>>n>>m>>N && (n + m + N)>0)
	{
		if(cnt!=0)
		{
			cout<<endl;
		}
		cnt++;
		for(int i=0; i<n; i++)
		{
			v[i + 1].clear();
		}
		for(int i=0; i<m; i++)
		{
			int x, y, custo;
			cin>>x>>y>>custo;
			v[y].push_back({x, custo});
			v[x].push_back({y, custo});
		}
		cout<<"Case #"<<cnt<<endl;
		for(int bb=0; bb<N; bb++)
		{
			for(int i=1; i<=n; i++)
			{
				dist[i]= - 1;
			}
			int ini, fim;
			cin>>ini>>fim;
			bfs(ini);
			if(dist[fim]== - 1)
			{
				cout<<"no path"<<endl;
			}
			else
			{
				cout<<dist[fim]<<endl;
			}
		}
	}
}
