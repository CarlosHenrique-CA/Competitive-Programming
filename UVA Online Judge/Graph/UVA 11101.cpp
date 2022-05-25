#include <bits/stdc++.h> 

using namespace std;

int matriz[20050][20050];
queue<int> fila, fila2;

int bfs(int n)
{
	queue<int> q, qq;
	while(fila.size()!=0)
	{
		q.push(fila.front());
		qq.push(fila2.front());
		fila.pop();
		fila2.pop();
	}
	while(q.size()!=0)
	{
		int u=q.front();
		q.pop();
		int uu=qq.front();
		qq.pop();
		    if(u>0)
            {
                if(matriz[u - 1][uu]== - 1)
                {
                    matriz[u - 1][uu]=matriz[u][uu] + 1;
                    q.push(u - 1);
                    qq.push(uu);
                }
                else if(matriz[u - 1][uu]== - 2)
                {
					return matriz[u][uu] + 1;
				}
            }
            if(u<(n - 1))
            {
                if(matriz[u + 1][uu]==-1)
                {
                    matriz[u + 1][uu]=matriz[u][uu] + 1 ;
                    q.push(u + 1);
                    qq.push(uu);
                }
                else if(matriz[u + 1][uu]== - 2)
                {
					return matriz[u][uu] + 1;
				}
            }
            if(uu>0)
            {
                if(matriz[u][uu - 1]==-1)
                {
                    matriz[u][uu - 1]=matriz[u][uu] + 1;
                    q.push(u);
                    qq.push(uu - 1);
                }
                else if(matriz[u][uu - 1]== - 2)
                {
					return matriz[u][uu] + 1;
				}
            }
            if(uu<(n - 1))
            {
                if(matriz[u][uu + 1]==-1)
                {
                    matriz[u][uu + 1]=matriz[u][uu] + 1;
                    q.push(u);
                    qq.push(uu + 1);
                }
                else if(matriz[u][uu + 1]== - 2)
                {
					return matriz[u][uu] + 1;
				}
            }
	}
	return 0;
}

int main()
{
	int N;
	while(cin>>N && N!=0)
	{ 
		for(int i=0; i<=2001; i++)
		{
			for(int j=0; j<=2001; j++)
			{
				matriz[i][j]= - 1;
			}
		}
		for(int i=0; i<N; i++)
		{
			int x, y;
			cin>>x>>y;
			matriz[x][y]=0;
			fila.push(x);
			fila2.push(y);
		}
		int n;
		cin>>n;
		int t=n - N;
		for(int i=0; i<n; i++)
		{
			int x, y;
			cin>>x>>y;
			matriz[x][y]= - 2;
		}
		int k;
		if(t>0)
		{
			k=bfs(n);
		}
		else
		{
			k=bfs(N);
		}
		cout<<k<<endl;
	}
}
