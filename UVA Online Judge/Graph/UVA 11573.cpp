#include <bits/stdc++.h>

using namespace std;

char matriz[1005][1005];
int dist[1005][1005];

typedef pair<int,pair<int,int>> pii;

void bfs(int ini, int ini2, int fim, int fim2, int n, int m)
{
    dist[ini][ini2]=0;
    priority_queue<pii, vector<pii>, greater<pii>>q;
    q.push({0, {ini, ini2}});
    while(q.size()!=0)
    {
		int u=q.top().second.first;
		int uu=q.top().second.second;
		q.pop();
		int pe=dist[u][uu];
		if(u>0)
        {
            if(matriz[u][uu]=='0' && dist[u - 1][uu]== - 1 || matriz[u][uu]=='0' && dist[u - 1][uu]>dist[u][uu])
            {
                dist[u - 1][uu]= dist[u][uu];
                q.push({dist[u - 1][uu],{(u - 1), uu}});
            }
            if(matriz[u][uu]!='0' && dist[u - 1][uu]== - 1 || matriz[u][uu]!='0' && dist[u - 1][uu]>(dist[u][uu] + 1))
            {
                dist[u - 1][uu]= dist[u][uu] + 1;
                q.push({dist[u - 1][uu],{(u - 1), uu}});
            }
        }
        if(u<(n - 1))
        {
            if(matriz[u][uu]=='4' && dist[u + 1][uu]== - 1 || matriz[u][uu]=='4' && dist[u + 1][uu]>dist[u][uu])
            {
                dist[u + 1][uu]= dist[u][uu];
                q.push({dist[u + 1][uu],{(u + 1), uu}});
            }
            if(matriz[u][uu]!='4' && dist[u + 1][uu]== - 1 || matriz[u][uu]!='4' && dist[u + 1][uu]>(dist[u][uu] + 1))
            {
                dist[u + 1][uu]= dist[u][uu] + 1;
                q.push({dist[u + 1][uu],{(u + 1), uu}});
            }
        }
        if(uu>0)
        {
            if(matriz[u][uu]=='6' && dist[u][uu - 1]== - 1 || matriz[u][uu]=='6' && dist[u][uu - 1]>dist[u][uu])
            {
                dist[u][uu - 1]= dist[u][uu];
                q.push({dist[u][uu - 1],{u, (uu - 1)}});
            }
            if(matriz[u][uu]!='6' && dist[u][uu - 1]== - 1 || matriz[u][uu]!='6' && dist[u][uu - 1]>(dist[u][uu] + 1))
            {
                dist[u][uu - 1]= dist[u][uu] + 1;
                q.push({dist[u][uu - 1],{u, (uu - 1)}});
            }
        }
        if(uu<(m - 1))
        {
            if(matriz[u][uu]=='2' && dist[u][uu + 1]== - 1 || matriz[u][uu]=='2' && dist[u][uu + 1]>dist[u][uu])
            {
                dist[u][uu + 1]= dist[u][uu];
                q.push({dist[u][uu + 1],{u, (uu + 1)}});
            }
            if(matriz[u][uu]!='2' && dist[u][uu + 1]== - 1 || matriz[u][uu]!='2' && dist[u][uu + 1]>(dist[u][uu] + 1))
            {
                dist[u][uu + 1]= dist[u][uu] + 1;
                q.push({dist[u][uu + 1],{u, (uu + 1)}});
            }
        }
        if(uu<(m - 1) && u<(n - 1))
        {
            if(matriz[u][uu]=='3' && dist[u + 1][uu + 1]== - 1 || matriz[u][uu]=='3' && dist[u + 1][uu + 1]>dist[u][uu])
            {
                dist[u + 1][uu + 1]= dist[u][uu];
                q.push({dist[u + 1][uu + 1],{(u + 1), (uu + 1)}});
            }
            if(matriz[u][uu]!='3' && dist[u + 1][uu + 1]== - 1 || matriz[u][uu]!='3' && dist[u + 1][uu + 1]>(dist[u][uu] + 1))
            {
                dist[u + 1][uu + 1]= dist[u][uu] + 1;
                q.push({dist[u + 1][uu + 1],{(u + 1), (uu + 1)}});
            }
        }
        
        if(uu>0 && u>0)
        {
            if(matriz[u][uu]=='7' && dist[u - 1][uu - 1]== - 1 || matriz[u][uu]=='7' && dist[u - 1][uu - 1]>dist[u][uu])
            {
                dist[u - 1][uu - 1]= dist[u][uu];
                q.push({dist[u - 1][uu - 1],{(u - 1), (uu - 1)}});
            }
            if(matriz[u][uu]!='7' && dist[u - 1][uu - 1]== - 1 || matriz[u][uu]!='7' && dist[u - 1][uu - 1]>(dist[u][uu] + 1))
            {
                dist[u - 1][uu - 1]= dist[u][uu] + 1;
                q.push({dist[u - 1][uu - 1],{(u - 1), (uu - 1)}});
            }
        }
        
        if(uu<(m - 1) && u>0)
        {
            if(matriz[u][uu]=='1' && dist[u - 1][uu + 1]== - 1 || matriz[u][uu]=='1' && dist[u - 1][uu + 1]>dist[u][uu])
            {
                dist[u - 1][uu + 1]= dist[u][uu];
                q.push({dist[u - 1][uu + 1],{(u - 1), (uu + 1)}});
            }
            if(matriz[u][uu]!='1' && dist[u - 1][uu + 1]== - 1 || matriz[u][uu]!='1' && dist[u - 1][uu + 1]>(dist[u][uu] + 1))
            {
                dist[u - 1][uu + 1]= dist[u][uu] + 1;
                q.push({dist[u - 1][uu + 1],{(u - 1), (uu + 1)}});
            }
        }
        
        if(uu>0 && u<(n - 1))
        {
            if(matriz[u][uu]=='5' && dist[u + 1][uu - 1]== - 1 || matriz[u][uu]=='5' && dist[u + 1][uu - 1]>dist[u][uu])
            {
                dist[u + 1][uu - 1]= dist[u][uu];
                q.push({dist[u + 1][uu - 1],{(u + 1), (uu - 1)}});
            }
            if(matriz[u][uu]!='5' && dist[u + 1][uu - 1]== - 1 || matriz[u][uu]!='5' && dist[u + 1][uu - 1]>(dist[u][uu] + 1))
            {
                dist[u + 1][uu - 1]= dist[u][uu] + 1;
                q.push({dist[u + 1][uu - 1],{(u + 1), (uu - 1)}});
            }
            // DIAGONAL BAIXO ESQUERDA
        }
	}
}

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matriz[i][j];
        }
    }
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        for(int a=0; a<n; a++)
        {
            for(int b=0; b<m; b++)
            {
                dist[a][b]= - 1;
            }
        }
        int ini, ini2, fim, fim2;
        cin>>ini>>ini2>>fim>>fim2;
        ini--;
        ini2--;
        fim--;
        fim2--;
        bfs(ini, ini2, fim, fim2, n, m);
        cout<<dist[fim][fim2]<<endl;
    }
}

