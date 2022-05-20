#include <iostream>
 
using namespace std;
 
int main() 
{
    string forma;
    cin>>forma;
    int k;
    cin>>k;
    string padrao;
    int posicao=0;
    int menor=100;
    for(int i=0; i<5; i++)
    {
        cin>>padrao;
        int errado=0;
        int tam=padrao.size();
        for(int j=0; j<tam; j++)
        {
            if(padrao[j]!=forma[j])
            {
                errado++;
            }
        }
        if(errado<menor)
        {
            menor=errado;
            posicao=i + 1;
        }
    }
    if(posicao==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<posicao<<endl;
        cout<<menor<<endl;
    }
}
