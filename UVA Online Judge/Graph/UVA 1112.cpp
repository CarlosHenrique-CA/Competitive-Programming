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
    int f;
    cin>>f;
    for(int a=0; a<f; a++)
    {
        string txt;
        cin.ignore();
        getline(cin, txt);
        int N, fim, times;
        cin>>N>>fim>>times;
        int qnt;
        cin>>qnt;
        for(int i=1; i<=N; i++)
        {
            v[i].clear();
        }
        for(int i=0; i<qnt; i++)
        {
            int custo, x, y;
            cin>>x>>y>>custo;
            v[x].push_back({y, custo});
        }
        int cnt=0;
        for(int i=1; i<=N; i++)
        {
            for(int b=1; b<=N; b++)
            {
                dist[b]= - 1;
            }
            bfs(i, fim);
            if(dist[fim]!= - 1 && dist[fim]<=times)
            {
               cnt++; 
            }
        }
        cout<<cnt<<endl;
        if(a!=( f - 1))
        {
            cout<<endl;
        }
    }
}
