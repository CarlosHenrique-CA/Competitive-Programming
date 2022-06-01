#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v[1005];
int dist[1005];

void bfs(int ini)
{
    dist[ini]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
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
    int n, m, b, p;
    while(cin>>n>>m>>b>>p)
    {
        for(int i=0; i<n; i++)
        {
            v[i].clear();
            dist[i]= - 1;
        }
        for(int i=0; i<m; i++)
        {
            int x, y, custo;
            cin>>x>>y>>custo;
            v[x].push_back({y, custo});
            v[y].push_back({x, custo});
        }
        int banco[b];
        for(int i=0; i<b; i++)
        {
            cin>>banco[i];
        }
        for(int i=0; i<p; i++)
        {
			int pu;
			cin>>pu;
			bfs(pu);
        }
        int maior= - 2;
        int cnt=0;
        int sayve[b];
        int penis;
        for(int i=0; i<b; i++)
        {
			if((dist[banco[i]]>maior  && maior!= - 1)||( dist[banco[i]]== - 1 && maior!= - 1))
			{
				maior=dist[banco[i]];
				cnt=0;
				sayve[cnt]=banco[i];
				cnt++;
			}
			else
			{
				if(dist[banco[i]]==maior)
				{
					sayve[cnt]=banco[i];
					cnt++;
				}
			}
			penis=maior;
		}
        if(penis== - 1)
        {
          cout<<cnt<<" *"<<endl;  
        }
        else
        {
            cout<<cnt<<" "<<penis<<endl;
        }
        sort(sayve, sayve + cnt);
        for(int i=0; i<cnt; i++)
        {
			if(i== cnt - 1)
			{
				cout<<sayve[i]<<endl;
			}
			else
			{
				cout<<sayve[i]<< " ";
			}
		}
    }
}
