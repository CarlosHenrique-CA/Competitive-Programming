#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> v[1005];
int dist[1005];
int uyuy;

queue<int> bfs(int ini, int fim)
{
    dist[ini]= 0;
    queue<int> save;
    priority_queue<pair<int,pair<int, queue<int>>>, vector<pair<int,pair<int, queue<int>>>>, greater<pair<int,pair<int, queue<int>>>>> q;
    q.push({0, {ini, save}});
    while(q.size()!=0)
    {
        int u=q.top().second.first;
        int ta=v[u].size();
        for(int i=0; i<ta; i++)
        {
            int a=v[u][i].first;
            int cust=v[u][i].second;
            int pe=dist[u] + cust;
            if(dist[a]== - 1 || dist[a]>pe)
            {
                queue<int> b=q.top().second.second;
                b.push(a);
                if(a==fim)
                {
                    save=q.top().second.second;
                }
                dist[a]=pe;
                q.push({dist[a],{a, b}});
            }
        }
        q.pop();
    }
    uyuy=dist[fim];
    return save;
}

int main()
{    
    int n;
    int pen=0;
    while(cin>>n && n!=0)
    {
        pen++;
        for(int i=1; i<=n; i++)
        {
            v[i].clear();
            dist[i]= - 1;
            int N;
            cin>>N;
            for(int j=0; j<N; j++)
            {
                int x, custo;
                cin>>x>>custo;
                v[i].push_back({x, custo});
            }
        }
        int ini, fim;
        cin>>ini>>fim;
        queue<int> ain=bfs(ini, fim);
        cout<<"Case "<<pen<<": Path = ";
        cout<<ini<< " ";
        while(ain.size()!=0)
        {
            cout<<ain.front()<<" ";
            ain.pop();
        }
        cout<<fim;
        cout<<"; "<<uyuy<<" second delay"<<endl;
    }
}
