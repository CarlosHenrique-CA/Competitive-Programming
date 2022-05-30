#include <bits/stdc++.h>

using namespace std;

multimap<string, string> mapa;
multimap<string, string> mapa2;
unordered_map<string, int> visited;
unordered_map<string, int>::iterator it2;
stack<string> pilha;
queue<string> fila;

void dfs(string z)
{
    unordered_map<string, int>::iterator it3;
    multimap<string, string>::iterator it;
    it3=visited.find(z);
    it3->second=0;
    it=mapa.find(z);
    while(it!=mapa.end() && it->first==z)
    {
        it3=visited.find(it->second);
        if(it3->second== - 1)
        {
            dfs(it3->first);
        }
        it++;
    }
    pilha.push(z);
}

void dfs2(string z)
{
    unordered_map<string, int>::iterator it3;
    multimap<string, string>::iterator itj;
    it3=visited.find(z);
    it3->second=0;
    itj=mapa2.find(z);
    while(itj!=mapa2.end() && itj->first==z)
    {
        it3=visited.find(itj->second);
        if(it3->second== - 1)
        {
            dfs2(it3->first);
        }
        itj++;
    }
    fila.push(z);
}

int main()
{
    int n, m;
    int cnt=0;
    while(cin>>n>>m && (n + m)>0)
    {
        if(cnt!=0)
        {
            cout<<endl;
        }
        mapa.clear();
        mapa2.clear();
        visited.clear();
        cnt++;
        for(int i=0; i<m; i++)
        {
            string x, y;
            cin>>x>>y;
            mapa.insert({x, y});
            mapa2.insert({y, x});
            visited[x]= - 1;
            visited[y] = - 1;
        }
        for(it2=visited.begin(); it2!=visited.end(); it2++)
        {
            if(it2->second== - 1)
            {
                dfs(it2->first);
            }
        }
        for(it2=visited.begin(); it2!=visited.end(); it2++)
        {
            it2->second= - 1;
        }
        cout<<"Calling circles for data set "<<cnt<<":"<<endl;
        while(pilha.size()!=0)
        {
            string u=pilha.top();
            it2=visited.find(u);
            pilha.pop();
            if(it2->second== - 1)
            {
                while(fila.size()!=0)
                {
                    if(fila.size()==1)
                    {
                        cout<<fila.front()<<endl;
                    }
                    else
                    {
                        cout<<fila.front()<<", ";
                    }
                    fila.pop();
                }
                dfs2(u);
            }
        }
        while(fila.size()!=0)
        {
            if(fila.size()==1)
            {
                cout<<fila.front()<<endl;
            }
            else
            {
                cout<<fila.front()<<", ";
            }
            fila.pop();
        }
    }
}
