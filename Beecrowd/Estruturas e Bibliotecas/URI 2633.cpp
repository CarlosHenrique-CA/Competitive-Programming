#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N, valor;
    string nome;
    while(cin>>N)
    {
        map<int, string> mapa;
        map<int, string>:: iterator it;
        for(int i=0; i<N; i++)
        {
            cin>>nome>>valor;
            mapa[valor]=nome;
        }
        int k=0;
        for(it=mapa.begin(); it!=mapa.end(); it++)
        {
            k++;
            if(k==N)
            {
                cout<<it->second<<endl;
            }
            else
            {
                cout<<it->second<<" ";
            }
        }
    }
}
