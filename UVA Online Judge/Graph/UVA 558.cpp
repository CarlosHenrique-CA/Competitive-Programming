#include <bits/stdc++.h>

using namespace std;

int dist[10001], aresta[10001], aresta2[10001], custos[10001];

bool bfs(int ini, int n, int m)
{
        for(int i = 1; i < n; i++) 
        {
            dist[i] = 99999;
        }
        dist[0] = 0;
        for(int step = 0; step < n-1; step++)
        {
            for(int i = 0; i < m; i++)
            {
                int u = aresta[i];
                int v = aresta2[i];
                if(dist[u] + custos[i] < dist[v])
                {
                    dist[v] = dist[u] + custos[i];
                }
            }
        }
        for(int i = 0; i < m; i++ ) 
        {
            int u = aresta[i];
            int v = aresta2[i];
            if(dist[u] + custos[i] < dist[v])
            {
               return true;
            }
        }
        return false;
}

int main()
{
    int N;
    cin>>N;
    for(int a=0; a<N; a++)
    {
        int n, m, ini, fim;
        cin>>n>>m;
        for(int i = 0; i < m; i++)
        {
            cin>>aresta[i]>>aresta2[i]>>custos[i];
        }
        bool xis=bfs(0, n, m);
        if(xis==false)
        {
            cout<<"not possible"<<endl;
        }
        else
        {
            cout<<"possible"<<endl;
        }
    }
}
