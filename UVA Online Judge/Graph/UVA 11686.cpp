#include <bits/stdc++.h>

using namespace std;

stack<int> pilha;
vector<int> v[1000005];
int dist[1000005];
int ka=0;

void dfs(int z)
{
    dist[z]= 1 ;
    for(int i=0; i<v[z].size(); i++)
    {
        if(dist[v[z][i]]== - 1)
        {
            dfs(v[z][i]);
        }
        else
        {
            if(dist[v[z][i]]==1)
            {
                ka=1;
            }
        }
    }
    dist[z]=2;
    pilha.push(z);
}

int main() 
{
    int N, n;
    while(cin>>N>>n && (N + n)>0)
    {
        ka=0;
        while(pilha.size()!=0)
        {
            pilha.pop();
        }
        for(int i=1; i<=N; i++)
        {
            dist[i]= - 1;
            v[i].clear();
        }
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin>>x>>y;
            if(x==y)
            {
                ka++;
            }
            for(int a=0; a<v[y].size(); a++)
            {
                if(v[y][a]==x)
                {
                    ka++;
                }
            }
            v[x].push_back(y);
        }
        for(int i=1; i<=N; i++)
        {
            if(dist[i]== - 1 && ka==0)
            {
                dfs(i);
            }
        }
        while(pilha.size()!=0 && ka==0)
        {
            cout<<pilha.top()<<endl;
            pilha.pop();
        }
        if(ka!=0)
        {
          cout<<"IMPOSSIBLE"<<endl;  
        }
    }
}




