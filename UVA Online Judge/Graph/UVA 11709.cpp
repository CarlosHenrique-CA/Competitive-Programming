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
        cin.ignore();
        cnt=0;
        mapa.clear();
        mapa2.clear();
        visited.clear();
        for(int i=0; i<n; i++)
        {
            string x;
            getline(cin, x);
            visited[x]= - 1;
        }
        for(int i=0; i<m; i++)
        {
            string x, y;
            getline(cin, x);
            getline(cin, y);
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
        while(pilha.size()!=0)
        {
            string u=pilha.top();
            it2=visited.find(u);
            pilha.pop();
            if(it2->second== - 1)
            {
                cnt++;
                dfs2(u);
            }
        }
        cout<<cnt<<endl;
    }
}

