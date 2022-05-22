#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int min, N;
    string nome;
    cin>>min>>N;
    int to=60-min;
    string hora;
    int hora4, hora5, horass;
    multimap<double, string> mapa;
    multimap<double, string>:: iterator it;
    for(int i=0; i<N; i++)
    {
        cin>>hora;
        cin>>nome;
        hora4=hora[3] - 48;
        hora5=hora[4] - 48;
        horass=hora4*10 + hora5;
        if(hora[0]=='2' && hora[1]=='3' && horass>=to)
        {
            double x=horass;
            mapa.insert({x, nome});
        }
        if(hora[0]=='0' && hora[1]=='0' && horass<=min)
        {
            int x=horass + 100;
            mapa.insert({x, nome});
        }
    }
    for(it=mapa.begin(); it!=mapa.end(); it++)
    {
        cout<<it->second<<endl;
    }
}
