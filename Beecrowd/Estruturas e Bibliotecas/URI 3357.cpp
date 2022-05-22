#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    double L, Q;
    cin>>N>>L>>Q;
    queue<string> fila;
    string nome;
    for(int i=0; i<N; i++)
    {
        cin>>nome;
        fila.push(nome);
    }
    while(L>0)
    {
        if(L - Q>0.0)
        {
            L= L - Q;
            string aux;
            aux=fila.front();
            fila.pop();
            fila.push(aux);
        }
        else
        {
            break;
        }
    }
    cout<<fila.front()<<" "<<L<<endl;
}
