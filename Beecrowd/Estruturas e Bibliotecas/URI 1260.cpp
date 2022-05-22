#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    cin.ignore();
    cin.ignore();
    string nome;
    for(int i=0; i<N; i++)
    {
        double n=0;
        if(i!=0)
        {
            cout<<endl;
        }
        map<string, int> mapa;
        map<string, int> :: iterator it;
        while(getline(cin,nome))
        {
            if(nome.size()==0)
            {
                break;
            }
            mapa[nome]++;
            n++;
        }
        for(it=mapa.begin(); it!=mapa.end(); it++)
        {
            cout<<it->first<<" ";
            double total=it->second * 100.0/n;
            cout<<fixed<<setprecision(4)<<total<<endl;
        }
    }
}
