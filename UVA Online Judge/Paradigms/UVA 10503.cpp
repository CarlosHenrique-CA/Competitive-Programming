#include <bits/stdc++.h>
using namespace std;

pair<int, int> fim;
pair<int, int> ini;
pair<int, int> v[50];
bool visited[50];

int ain=0;

void back(int N, int cnt, int atual, int n)
{
    if(cnt<=n)
    {
        if(cnt==n)
        {
            if(atual==fim.first)
            {
                ain=1;
            }
        }
        else
        {
            for(int i=0; i<N; i++)
            {
                if(visited[i]==false && v[i].first==atual)
                {
                    visited[i]=true;
                    back(N, cnt + 1, v[i].second, n);
                    visited[i]=false;
                }
                if(visited[i]==false && v[i].second==atual)
                {
                    visited[i]=true;
                    back(N, cnt + 1, v[i].first, n);
                    visited[i]=false;
                }
            }
        }
    }
}

int main()
{
    int n, N;
    while(cin>>n && n!=0)
    {
        ain=0;
        cin>>N;
        int inis, ini2;
        cin>>inis>>ini2;
        ini={inis, ini2};
        int fims, fim2;
        cin>>fims>>fim2;
        fim={fims, fim2};
        for(int i=0; i<N; i++)
        {
            visited[i]=false;
            int x, y;
            cin>>x>>y;
            v[i]={x, y};
        }
        back(N, 0, ini2, n);
        if(ain==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
