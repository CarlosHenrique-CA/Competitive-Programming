#include <bits/stdc++.h>

using namespace std;

vector<int> v[50005];
bool visited[50005];
bool visited2[50005];
stack<int> pilha;
int cnt=0;

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
    visited2[z]=true;
    for(int i=0; i<v[z].size(); i++)
    {
        if(!visited2[v[z][i]])
        {
            cnt++;
            dfs2(v[z][i]);
        }
    }
}

int main()
{
    int N;
    cin>>N;
    for(int a=0; a<N; a++)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            visited[i + 1]=false;
            visited2[i + 1]=false;
            v[i + 1].clear();
        }
        for(int i=0; i<n; i++)
        {
            int x, y;
            cin>>x>>y;
            v[x].push_back(y);
        }
        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
            {
                dfs(i);
                pilha.push(i);
            }
        }
        int maior=0;
        int salvar;
        while(pilha.size()!=0)
        {
            int u=pilha.top();
            pilha.pop();
            cnt=1;
            if(visited2[u]==false)
            {
                for(int i=1; i<=n; i++)
                {
                    visited2[i]=false;
                }
                dfs2(u);
            }
            if(maior<cnt || maior==cnt && u<salvar)
            {
                maior=cnt;
                salvar=u;
            }
        }
        cout<<"Case "<<a + 1<<": "<<salvar<<endl;
    }
}
