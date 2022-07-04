#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> v[1005];
bool visited[1005];
bool visited2[1005];
stack<int> pilha;
long long int maior;
int cont;

void dfs(int z)
{
    visited[z]=true;
    for(int i=0; i<v[z].size(); i++)
    {
        if(!visited[v[z][i].first] && v[z][i].second==maior)
        {
            cont++;
            dfs(v[z][i].first);
        }
    }
    pilha.push(z);
}


int main()
{
    int n, m;
    while(cin>>n>>m && (n + m)>0)
    {
        maior= - 2147483648;
        cont=0;
        for (int i=0; i<n; i++)
        {
            v[i + 1].clear();
            visited[i + 1]=false;
            visited2[i + 1]=false;
        }
        for(int i=0; i<m; i++)
        {
            int x, y, custo;
            cin>>x>>y>>custo;
            v[x].push_back({y, custo});
            v[y].push_back({x, custo});
            if(custo>maior)
            {
                maior=custo;
            }
        }
        int save=0;
        for(int i=1; i<=n; i++)
		{
		    cont=1;
			if(!visited[i])
			{
				dfs(i);
				if(cont>save)
				{
				    save=cont;
				}
			}
		}
		cout<<save<<endl;
    }
}
