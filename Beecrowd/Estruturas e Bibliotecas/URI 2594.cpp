#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    string palavra, procurar;
    for(int i=0; i<N; i++)
    {
        multimap<string, int> mapa;
        multimap<string, int>:: iterator it;
        cin.ignore();
        getline(cin, palavra);
        cin>>procurar;
        int ta=palavra.size();
        string texto="";
        int j;
        for(j=0; j<ta; j++)
        {
            if(palavra[j]==' ')
            {
                int tam=j - texto.size();
                mapa.insert({texto, tam});
                texto="";
            }
            else
            {
                texto+=palavra[j];
            }
        }
        int tam=j - texto.size();
        mapa.insert({texto, tam});
        texto="";
        it=mapa.find(procurar);
        if(it==mapa.end())
        {
            cout<<"-1";
        }
        int z=0;
        while(it!=mapa.end())
        {
            if(z==0)
            {
                cout<<it->second;
                z=1;
            }
            else
            {
                cout<<' '<<it->second;
            }
            mapa.erase(it);
            it=mapa.find(procurar);
        }
        cout<<endl;
    }
}
