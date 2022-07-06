#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v[1000005];
vector<pair<int,int>> vrev[1000005];
int dist[1000005];
int dist2[1000005];

int bfs(int x, int n)
{
    dist[x]= 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0, x});
    while(q.size()!=0)
    {
        int u=q.top().second;
        int custo=q.top().first;
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int a=v[u][i].first;
            int cust=v[u][i].second;
            if(dist[a]== - 1 || dist[a]>(dist[u] + cust))
            {
                dist[a]=dist[u] + cust;
                q.push({dist[a], a});
            }
        }
    }
    int soma=0;
    for(int i=1; i<=n; i++)
    {
        soma+=dist[i];
    }
    return soma;
}

int bfsrev(int x, int n)
{
    dist2[x]= 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0, x});
    while(q.size()!=0)
    {
        int u=q.top().second;
        int custo=q.top().first;
        q.pop();
        for(int i=0; i<vrev[u].size(); i++)
        {
            int a=vrev[u][i].first;
            int cust=vrev[u][i].second;
            if(dist2[a]== - 1 || dist2[a]>(dist2[u] + cust))
            {
                dist2[a]=dist2[u] + cust;
                q.push({dist2[a], a});
            }
        }
    }
    int soma=0;
    for(int i=1; i<=n; i++)
    {
        soma+=dist2[i];
    }
    return soma;
}

int main()
{
    int N;
    cin>>N;
    for(int j=0; j<N; j++)
    {
        int n, m;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            dist[i + 1]= - 1;
            dist2[i + 1]= - 1;
            v[i + 1].clear();
            vrev[i + 1].clear();
        }
        for(int i=0; i<m; i++)
        {
            int x, y, custo;
            cin>>x>>y>>custo;
            v[x].push_back({y, custo});
            vrev[y].push_back({x, custo});
        }
        int soma=bfs(1, n);
        soma+=bfsrev(1, n);
        cout<<soma<<endl;
    }
}
