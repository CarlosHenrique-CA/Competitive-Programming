#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N;
    string nome;
    char lado;
    double custo;
    while(cin>>N)
    {
        multimap<pair<double, string>, string> mapa;
        multimap<pair<double, string>, string>:: iterator it;
        for(int i=0; i<N; i++)
        {
            cin>>nome>>lado>>custo;
            if(lado=='L')
            {
                custo=custo - 0.0003;
            }
            else
            {
                if(lado=='N')
                {
                    custo=custo - 0.0002;
                }
                else
                {
                    if(lado=='O')
                    {
                        custo=custo - 0.0001;
                    }
                }
            }
            mapa.insert({make_pair(custo, nome), nome});
        }
        for(it=mapa.begin(); it!=mapa.end(); it++)
        {
            cout<<it->second<<endl;
        }
    }
}
