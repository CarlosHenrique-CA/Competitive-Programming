#include <bits/stdc++.h>

using namespace std;

vector<int> v[10005];
int pau;
int dist[10005];
int N;
int ve[10005];
void bfs(int x)
{
    queue<int> q;
    q.push(x);
    dist[x]=0;
    while(q.size()!=0)
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int a=v[u][i];
            if(dist[a]== - 1)
            {
                q.push(a);
                dist[a]= dist[u] + 1;
            }
        }
    }
    for(int i=1; i<=N; i++)
    {
        if(ve[i]>1)
        {
            pau+=dist[i];
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for(int a=0; a<n; a++)
    {
        int m;
        cin>>N>>m;
        for(int i=1; i<=N; i++)
        {
            v[i].clear();
           ve[i]= 0;
        }
        while(m--)
        {
            int x;
            cin>>x;
            ve[x]++;
            int y=x;
            while(cin>>x && x!=0)
            {
                ve[x]++;
                v[y].push_back(x);
                v[x].push_back(y);
                y=x;
            }
        }
        int maior=99999999;
        int sayve;
        for(int i=1; i<=N; i++)
        {
            if(ve[i]>1)
            {
                for(int j=1; j<=N; j++)
                {
                    dist[j]= - 1;
                }
                pau=0;
                bfs(i);
                if(pau<maior)
                {
                    maior=pau;
                    sayve=i;
                }
            }
        }
        cout<<"Krochanska is in: "<<sayve<<endl;
    }
}
