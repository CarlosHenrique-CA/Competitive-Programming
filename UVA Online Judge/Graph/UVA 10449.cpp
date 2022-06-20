#include <bits/stdc++.h>

using namespace std;

vector<int> v[50005];
int dist[50005];
int custos[50005];

void bfs(int x, int n)
{
    for(int i=1; i<=n; i++)
    {
        custos[i]= 999999;
    }
    custos[1]=0;
    for(int i=0; i<n - 1; i++)
    {
        for(int j=1; j<=n; j++)
        {
			int ta=v[j].size();
            for(int a=0; a<ta; a++)
            {
                if(custos[j] != 999999)
                {
					int sapo=(dist[v[j][a]] - dist[j]);
					int uy= pow(sapo, 3) + custos[j];
				    custos[v[j][a]] = min(custos[v[j][a]], uy);
                }
            }
        }
    }
    queue<int> q;
    for(int uu=0; uu<n - 1; uu++)
    {
		for(int i=1; i<=n; i++)
		{
			int ta=v[i].size();
			for(int a=0; a<ta; a++)
			{
				int sapo=(dist[v[i][a]] - dist[i]);
						int uy= pow(sapo, 3) + custos[i];
				if(custos[v[i][a]] > uy)
				{
					q.push(v[i][a]);
				}
				custos[v[i][a]] = min(custos[v[i][a]], uy);
			}
		}
	}
	while(q.size()!=0)
	{
		int u=q.front();
		custos[u]= - 2;
		q.pop();
	}
}

int main()
{
    int n;
    int a=0;
    while(cin>>n)
    {
        a++;
        for(int i=1; i<=n; i++)
        {
            v[i].clear();
            cin>>dist[i];
            custos[i]= - 1;
        }
        int m;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        cout<<"Set #"<<a<<endl;
        cin>>m;
        for(int i=0; i<m; i++)
        {
            int q;
            cin>>q;
            if(i==0)
            {
                bfs(q, n);
            }
            if(custos[q]>2 && custos[q]!=999999)
            {
            cout<<custos[q]<<endl;
            }
            else
            {
                cout<<"?"<<endl;
            }
        }
    }
}

