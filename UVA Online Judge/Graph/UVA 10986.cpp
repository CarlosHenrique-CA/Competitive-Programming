#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v[20005];
int dist[20005];

void bfs(int ini, int fim)
{
    dist[ini]=0;
    priority_queue<pair<int,int>> q;
    q.push({0, ini});
    while(q.size()!=0)
    {
		int u=q.top().second;
		q.pop();
		int aa=v[u].size();
		for(int i=0; i<aa; i++)
		{
			int pa=v[u][i].first;
			int pe=dist[u] + v[u][i].second;
			if(dist[pa]== - 1 || dist[pa]>pe)
			{
				dist[pa]=pe;
				q.push({v[u][i].second, pa});
			}
		}
	}
}

int main()
{
    int N;
    cin>>N;
    for(int a=0; a<N; a++)
    {
        int n, m, ini, fim;
        cin>>n>>m>>ini>>fim;
        for(int i=0; i<n; i++)
        {
            dist[i]= - 1;
            v[i].clear();
        }
        for(int i=0; i<m; i++)
        {
            int custo, x, y;
            cin>>x>>y>>custo;
            v[x].push_back({y, custo});
            v[y].push_back({x, custo});
        }
        bfs(ini, fim);
        if(dist[fim]== - 1)
        {
            cout<<"Case #"<<a + 1<<": unreachable"<<endl;
        }
        else
        {
            cout<<"Case #"<<a + 1<<": "<<dist[fim]<<endl;
        }
    }
}
