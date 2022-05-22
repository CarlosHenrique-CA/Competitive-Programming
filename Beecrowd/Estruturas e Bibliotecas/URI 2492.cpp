#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N;
    string nome1, nome2, seta;
    while(cin>>N && N!=0)
    {
        map<string, string> mapa;
        map<string, string> mapainverso;
        for(int i=0; i<N; i++)
        {
            cin>>nome1>>seta>>nome2;
            mapa[nome1]=nome2;
            mapainverso[nome2]=nome1;
        }
        int tamain=mapa.size();
        if(tamain==N)
        {
			int ta=mapainverso.size();
            if(ta==N)
            {
                cout<<"Invertible."<<endl;
            }
            else
            {
                cout<<"Not invertible."<<endl;
            }
        }
        else
        {
            cout<<"Not a function."<<endl;
        }
    }
}
