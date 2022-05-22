#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int n;
    cin>>n;
    while(n!=0)
    {
        map<string, string> mapa;
        map<string, string> :: iterator it;
        string nome, assinatura;
        for(int i=0; i<n; i++)
        {
            cin>>nome>>assinatura;
            mapa[nome]=assinatura;
        }
        int N;
        cin>>N;
        int ka=0;
        for(int j=0; j<N; j++)
        {
            cin>>nome>>assinatura;
            it=mapa.find(nome);
            int ta=it->second.size();
            int z=0;
            for(int aa=0; aa<ta; aa++)
            {
                if(it->second[aa]!=assinatura[aa])
                {
                    z++;
                }
            }
            if(z>1)
            {
                ka++;
            }
        }
        cout<<ka<<endl;
        cin>>n;
    }
}
