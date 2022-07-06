#include <bits/stdc++.h>

using namespace std;

int main()
{    
    int n, m;
    cin>>n;
    for(int ain=0; ain<n; ain++)
    {
        if(ain!=0)
        {
            cout<<endl;
        }
        cin.ignore();
        string txt;
        getline(cin, txt);
        cin>>m;
        vector<vector<int> > v((999), vector<int>(999, 999));
        vector<vector<int> > v2((999), vector<int>(999, 999));
        int maior=0;
        int menor=9999;
        for(int i=0; i<m; i++)
        {
            char x, y;
            cin>>x>>y;
            v[x][y]=1;
            v[y][x]=1;
            if(max(x, y)>maior)
            {
                maior=max(x, y);
            }
            if(min(x, y)<menor)
            {
                menor=min(x, y);
            }
        }
        for(int i=menor; i<=maior; i++)
        {
            v2[i][i]=0;
            v[i][i]=0;
        }
        for (int k = menor; k <= maior; ++k)
        {
            for (int i = menor; i <= maior; ++i)
            {
                for (int j = menor; j <= maior; ++j)
                {
                   v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
                }
            }
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            char x, y;
            cin>>x>>y;
            v2[x][y]=1;
            v2[y][x]=1;
            if(max(x, y)>maior)
            {
                maior=max(x, y);
            }
            if(min(x, y)<menor)
            {
                menor=min(x, y);
            }
        }
        for (int k = menor; k <= maior; ++k)
        {
            for (int i = menor; i <= maior; ++i)
            {
                for (int j = menor; j <= maior; ++j)
                {
                   v2[i][j] = min(v2[i][j], v2[i][k] + v2[k][j]);
                }
            }
        }
        bool ok=true;
        for(int i=menor; i<=maior; i++)
        {
            for(int j=menor; j<=maior; j++)
            {
                if(v[i][j]==999 && v2[i][j]!=999)
                {
                    ok=false;
                    break;
                }
                if(v2[i][j]==999 && v[i][j]!=999)
                {
                    ok=false;
                    break;
                }
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
