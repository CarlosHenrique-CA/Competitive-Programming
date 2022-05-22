#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    string texto;
    getline(cin, texto);
    int qnt;
    cin>>qnt;
    string palavra[qnt];
    for(int i=0; i<qnt; i++)
    {
        cin>>palavra[i];
    }
    int tamanho=texto.size();
    string soma="";
    for(int j=0; j<qnt; j++)
    {
        queue<int> fila;
        int kkk=0;
        for(int i=0; i<tamanho; i++)
        {
            if(texto[i]==' ')
            {
                if(palavra[j]==soma)
                {
                    int size;
                    size=soma.size();
                    int pia= i - size;
                    fila.push(pia);
                    kkk++;
                }
                soma="";
            }
            else
            {
                soma+=texto[i];
            }
        }
        if(kkk==0)
        {
            cout<<"-1";
        }
        else
        {
            while(fila.size()!=0)
            {
                if(fila.size()!=1)
                {
                    cout<<fila.front();
                    fila.pop();
                    cout<<" ";
                }
                else
                {
                    cout<<fila.front();
                    fila.pop();
                }
            }
        }
            cout<<endl;
    }
}
