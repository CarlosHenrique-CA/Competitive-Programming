#include <bits/stdc++.h>

using namespace std;

vector<int> v[2005];
vector<int> vrev[2005];
bool visited[2005];
stack<int> pilha;

void dfs(int z)
{
    visited[z]=true;
    for(int i=0; i<v[z].size(); i++)
    {
        if(!visited[v[z][i]])
        {
            dfs(v[z][i]);
        }
    }
    pilha.push(z);
}

void dfs2(int z)
{
    visited[z]=true;
    for(int i=0; i<vrev[z].size(); i++)
    {
        if(!visited[vrev[z][i]])
        {
            dfs2(vrev[z][i]);
        }
    }
}

int main()
{
    int n, m;
    while(cin>>n>>m && (n + m)>0)
    {
        for(int i=0; i<n; i++)
        {
            visited[i + 1]=false;
            v[i + 1].clear();
            vrev[i + 1].clear();
        }
        for(int i=0; i<m; i++)
        {
            int x, y, z;
            cin>>x>>y>>z;
            if(z==1)
            {
                v[x].push_back(y);
                vrev[y].push_back(x);
            }
            else
            {
                v[y].push_back(x);
                v[x].push_back(y);
                vrev[x].push_back(y);
                vrev[y].push_back(x);
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
            {
                dfs(i);
            }
        }
        for(int i=0; i<n; i++)
        {
            visited[i + 1]=false;
        }
        int cnt=0;
        while(pilha.size()!=0)
        {
            if(visited[pilha.top()]==false)
            {
                dfs2(pilha.top());
                cnt++;
            }
            pilha.pop();
        }
        if(cnt==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}
