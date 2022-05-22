#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    string lista, novos, palavra="";
    getline(cin, lista);
    int ta=lista.size();
    queue<string> fila;
    queue<string> fila2;
    for(int i=0; i<ta; i++)
    {
        if(lista[i]==' ')
        {
            fila.push(palavra);
            palavra="";
        }
        else
        {
            palavra+=lista[i];
        }
    }
    fila.push(palavra);
    palavra="";
    getline(cin, novos);
    ta=novos.size();
    for(int i=0; i<ta; i++)
    {
        if(novos[i]==' ')
        {
            fila2.push(palavra);
            palavra="";
        }
        else
        {
            palavra+=novos[i];
        }
    }
    fila2.push(palavra);
    string add;
    cin>>add;
    if(add=="nao")
    {
        while(fila.size()!=0)
        {
            cout<<fila.front()<<" ";
            fila.pop();
        }
        while(fila2.size()!=0)
        {
            if(fila2.size()==1)
            {
                cout<<fila2.front()<<endl;
            }
            else
            {
                cout<<fila2.front()<<" ";
            }
            fila2.pop();
        }
    }
    else
    {
        while(fila.size()!=0)
        {
            if(fila.front()==add)
            {
                break;
            }
            cout<<fila.front()<<" ";
            fila.pop();
        }
        while(fila2.size()!=0)
        {
            cout<<fila2.front()<<" ";
            fila2.pop();
        }
        while(fila.size()!=0)
        {
            if(fila.size()==1)
            {
                cout<<fila.front()<<endl;
            }
            else
            {
                cout<<fila.front()<<" ";
            }
            fila.pop();
        }
    }
}
