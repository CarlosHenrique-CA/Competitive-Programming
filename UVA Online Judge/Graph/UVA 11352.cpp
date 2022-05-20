#include <bits/stdc++.h>
using namespace std;

char matriz[105][105]; 
int dist[105][105];
queue<int> salvar, salvar2;

void bfs(int i, int j, int n, int m, int fim, int fim2)
{
    dist[i][j]=0;
    queue<int> q, qq;
    q.push(i);
    qq.push(j);
    while(q.size()!=0)
    {
        if(dist[fim][fim2]!= - 1)
		{
		    break;
		}
		int u=q.front();
		int uu=qq.front();
		q.pop();
		qq.pop();
		    if((u + 1)>0 && matriz[u - 1][uu]!='Z')
            {
                if(dist[u - 1][uu]== - 1)
                {
                    dist[u - 1][uu]=dist[u][uu] + 1;
                    q.push(u - 1);
                    qq.push(uu);
                }
            }
            if(u<(n - 1) && matriz[u + 1][uu]!= 'Z')
            {
                if(dist[u + 1][uu]== - 1)
                {
                    dist[u + 1][uu]=dist[u][uu] + 1 ;
                    q.push(u + 1);
                    qq.push(uu);
                }
            }
            if((uu + 1)>0 && matriz[u][uu - 1]!= 'Z')
            {
                if(dist[u][uu - 1]== - 1)
                {
                    dist[u][uu - 1]=dist[u][uu] + 1;
                    q.push(u);
                    qq.push(uu - 1);
                }
            }
            if(uu<(m - 1) && matriz[u][uu + 1]!= 'Z')
            {
                if(dist[u][uu + 1]== - 1)
                {
                    dist[u][uu + 1]=dist[u][uu] + 1;
                    q.push(u);
                    qq.push(uu + 1);
                }
            }
            if(uu<(m - 1) && u<(n - 1) && matriz[u + 1][uu + 1]!='Z')
            {
                if(dist[u + 1][uu + 1]== - 1)
                {
                    dist[u + 1][uu + 1]=dist[u][uu] + 1;
                    q.push(u + 1);
                    qq.push(uu + 1);
                }
            }
            if(uu>0 && u>0 && matriz[u - 1][uu - 1]!='Z')
            {
                if(dist[u - 1][uu - 1]== - 1)
                {
                    dist[u - 1][uu - 1]=dist[u][uu] + 1;
                    q.push(u - 1);
                    qq.push(uu - 1);
                }
            }
            if(uu<(m - 1) && u>0 && matriz[u - 1][uu + 1]!='Z')
            {
                if(dist[u - 1][uu + 1]== - 1)
                {
                    dist[u - 1][uu + 1]=dist[u][uu] + 1;
                    q.push(u - 1);
                    qq.push(uu + 1);
                }
            }
            if(uu>0 && u<(n - 1) && matriz[u + 1][uu - 1]!='Z')
            {
                if(dist[u + 1][uu - 1]== - 1)
                {
                    dist[u + 1][uu - 1]=dist[u][uu] + 1;
                    q.push(u + 1);
                    qq.push(uu - 1);
                }
            }

    }
}
int main() 
{
	int N;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		int n, m;
		cin>>n>>m;
		int save, save2;
		int fim, fim2;
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<m; k++)
			{
				cin>>matriz[j][k];
				dist[j][k]= - 1;
				if(matriz[j][k]=='Z')
				{
					salvar.push(j);
					salvar2.push(k);
				}
				if(matriz[j][k]=='A')
				{
					save=j;
					save2=k;
				}
				if(matriz[j][k]=='B')
				{
					fim=j;
					fim2=k;
				}
			}
		}
		while(salvar.size()!=0)
		{
			int u=salvar.front();
			int uu=salvar2.front();
			salvar.pop();
			salvar2.pop();
			if((u - 2)>=0 && (uu - 1)>=0 && matriz[u - 2][uu - 1]=='.')
			{
			    matriz[u - 2][uu - 1]= 'Z';
			}
			if((u - 2)>=0 && (uu + 1)<m && matriz[u - 2][uu + 1]=='.')
			{
			    matriz[u - 2][uu + 1]= 'Z';
			}
			if((u - 1)>=0 && (uu - 2)>=0 && matriz[u - 1][uu - 2]=='.')
			{
			    matriz[u - 1][uu - 2]= 'Z';
			}
			if((u - 1)>=0 && (uu + 2)<m && matriz[u - 1][uu + 2]=='.')
			{
			    matriz[u - 1][uu + 2]= 'Z';
			}
			if((u + 1)<n && (uu - 2)>=0 && matriz[u + 1][uu - 2]=='.')
			{
			    matriz[u + 1][uu - 2]= 'Z';
			}
			if((u + 1)<n && (uu + 2)<m && matriz[u + 1][uu + 2]=='.')
			{
			    matriz[u + 1][uu + 2]= 'Z';
			}
			if((u + 2)<n && (uu - 1)>=0 && matriz[u + 2][uu - 1]=='.')
			{
			    matriz[u + 2][uu - 1]='Z';
			}
			if((u + 2)<n && (uu + 1)<m && matriz[u + 2][uu + 1]=='.')
			{
			    matriz[u + 2][uu + 1]='Z';
			}
		}
		bfs(save, save2, n, m, fim, fim2);
		if(dist[fim][fim2]== - 1)
		{
		    cout<<"King Peter, you can't go now!"<<endl;
		}
		else
		{
		    cout<<"Minimal possible length of a trip is "<<dist[fim][fim2]<<endl;
		}
	}
}


