#include <bits/stdc++.h>

using namespace std;

char matriz[15][15];
int dist[15][15];
int total=0;
int z=0;

int bfs(int b, int a, int n, int m)
{
	dist[a][b]= 0;
	queue<int> q, qq;
	q.push(a);
	qq.push(b);
	total=0;
	z=0;
	while(q.size()!=0)
	{
		int u=q.front();
		int uu=qq.front();
		total++;	
		q.pop();
		qq.pop();
		if(matriz[u][uu]=='N')
		{
			if(u>0)
			{
				if(dist[u - 1][uu]==-1)
				{
                    dist[u - 1][uu]=dist[u][uu] + 1;
                    q.push(u - 1);
                    qq.push(uu);
				}
				else
				{
					z++;
					int ka=dist[u][uu] - dist[u - 1][uu];
					return ka;
				}
            }
            else
            {
				return total;
				break;
			}
		}
		if(matriz[u][uu]=='S')
		{
            if(u<(n - 1))
            {
                if(dist[u + 1][uu]==-1)
                {
                    dist[u + 1][uu]=dist[u][uu] + 1 ;
                    q.push(u + 1);
                    qq.push(uu);
                }
                else
				{
					z++;
					int ka=dist[u][uu] - dist[u + 1][uu];
					return ka;
				}
            }
            else
            {
				return total;
				break;
			}
		}
		if(matriz[u][uu]=='W')
		{
            if(uu>0)
            {
                if(dist[u][uu - 1]==-1)
                {
                    dist[u][uu - 1]=dist[u][uu] + 1;
                    q.push(u);
                    qq.push(uu - 1);
                }
                else
				{
					z++;
					int ka=dist[u][uu] - dist[u][uu - 1];
					return ka;
				}
            }
            else
            {
				return total;
				break;
			}
		}	
		if(matriz[u][uu]=='E')
		{
            if(uu<(m - 1))
            {
                if(dist[u][uu + 1]==-1)
                {
                    dist[u][uu + 1]=dist[u][uu] + 1;
                    q.push(u);
                    qq.push(uu + 1);
                }
                else
				{
					z++;
					int ka=dist[u][uu] - dist[u][uu + 1];
					return ka;
				}
            }
            else
            {
				return total;
				break;
			}
		}
	}
	return 0;
}
int main()
{
	int n, m , entra;
	while(cin>>n>>m>>entra && (n + m + entra)>0)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				dist[i][j]= - 1;
				cin>>matriz[i][j];
			}
		}
		entra--;
		int k=bfs(entra, 0, n, m);
		if(z==0)
		{
			if(k==0)
			{
				k++;
			}
			cout<<k<<" step(s) to exit"<<endl;
		}
		else
		{
			k++;
			cout<<total - k<<" step(s) before a loop of "<<k<<" step(s)"<<endl;
		}
	}
}
