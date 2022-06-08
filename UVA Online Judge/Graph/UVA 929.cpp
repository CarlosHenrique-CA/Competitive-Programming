#include <bits/stdc++.h>

using namespace std;

int matriz[1005][1005];
int dist[1005][1005];

typedef pair<int,pair<int,int>> pii;
void bfs(int ini, int ini2, int n, int m, int fim, int fim2)
{
	dist[ini][ini2]=matriz[ini][ini2];
    priority_queue<pii, vector<pii>, greater<pii>>q;
    q.push({0, {ini, ini2}});
    while(q.size()!=0)
    {
		int u=q.top().second.first;
		int uu=q.top().second.second;
		q.pop();
		int x=dist[u][uu];
			if(u>0)
            {
                if(dist[u - 1][uu]== - 1 || dist[u - 1][uu]>(x + matriz[u - 1][uu]))
                {
                    dist[u - 1][uu]=matriz[u - 1][uu] + x;
                    q.push({dist[u - 1][uu],{(u - 1), uu}});
                }
            }
            if(u<(n - 1))
            {
                if(dist[u + 1][uu]==-1 || dist[u + 1][uu]>(x + matriz[u + 1][uu]))
                {
                    dist[u + 1][uu]=matriz[u + 1][uu] + x ;
                    q.push({dist[u + 1][uu],{(u + 1), uu}});
                }
            }
            if(uu>0)
            {
                if(dist[u][uu - 1]== - 1 || dist[u][uu - 1]>(x + matriz[u][uu - 1]))
                {
                    dist[u][uu - 1]=matriz[u][uu - 1] + x;
                    q.push({dist[u][uu - 1],{u, (uu - 1)}});
                }
            }
            if(uu<(m - 1))
            {
                if(dist[u][uu + 1]==-1 || dist[u][uu + 1]>(x + matriz[u][uu + 1]))
                {
                    dist[u][uu + 1]=matriz[u][uu + 1] + x ;
                    q.push({dist[u][uu + 1],{u, (uu + 1)}});
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
		int n, m;
		cin>>n;
		cin>>m;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				dist[i][j]= - 1;
				cin>>matriz[i][j];
			}
		}
		bfs(0, 0, n, m, (n - 1), (m - 1));
		cout<<dist[n - 1][m - 1]<<endl;
	}
}


