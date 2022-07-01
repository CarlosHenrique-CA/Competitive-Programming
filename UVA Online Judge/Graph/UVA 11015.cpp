#include <bits/stdc++.h>

using namespace std;

map<int, string> mapa;
map<int, string>::iterator it;
int main()
{    
    int n, m;
    int uepa=0;
    while(cin>>n>>m && (n + m)>0)
    {
        uepa++;
        vector<vector<int> > v((n + 1), vector<int>(n + 1, 999999));
        for(int i=0; i<n; i++)
        {
            string x;
            cin>>x;
            mapa[i + 1]=x;
        }
        for(int i=1; i<=n; i++)
        {
            v[i][i]=0;
        }
        for(int i=0; i<m; i++)
        {
            int x, y, custo;
            cin>>x>>y>>custo;
            v[x][y]=custo;
            v[y][x]=custo;
        }
        int dist[n + 1];
        for (int k = 1; k <= n; ++k)
        {
            dist[k]= 0;
            for (int i = 1; i <= n; ++i)
            {
                for (int j = 1; j <= n; ++j)
                {
                   v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
                }
            }
        }
        int menor=999999;
        int s;
        for (int k = 1; k <= n; ++k)
        {
            for (int i = 1; i <= n; ++i)
            {
                dist[k]+=v[i][k];
            }
            if(dist[k]<menor)
            {
                menor=dist[k];
                s=k;
            }
        }
        it=mapa.find(s);
        cout<<"Case #"<<uepa<<" : "<<it->second<<endl;
    }
}
