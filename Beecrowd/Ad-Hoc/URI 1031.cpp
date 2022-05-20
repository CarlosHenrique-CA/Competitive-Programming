#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, salvar;
    cin>>N;
    while(N!=0)
    {
        int n=0;
        int aux;
        queue<int> fila;
        while(n!= - 24)
        {
            for(int i=1; i<=N; i++)
            {
                fila.push(i);
            }
            fila.pop();
            n++;
            while(fila.size()!=1)
            {
                for(int j=1; j<n; j++)
                {
                    aux=fila.front();
                    fila.pop();
                    fila.push(aux);
                }
                fila.pop();
            }
            if(fila.front()==13)
            {
                salvar=n;
                n= - 24;
            }
            fila.pop();
        }
        cout<<salvar<<endl;
        cin>>N;
    }
}
