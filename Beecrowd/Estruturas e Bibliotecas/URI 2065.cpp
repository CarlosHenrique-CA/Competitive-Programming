#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, m, x;
    cin>>n>>m;
    int vetor[n];
    long long int vetor2[n];
    int vetor3[n];
    queue<int> fila;
    for(int i=0; i<n; i++)
    {
        cin>>vetor[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>x;
        fila.push(x);
    }
    for(int i=0; i<n; i++)
    {
        if(fila.size()!=0)
        {
            vetor2[i]= fila.front()  * vetor[i];
            fila.pop();
            vetor3[i]=0;
        }
    }
    long long int a=0;
    if(n>m)
    {
        n=m;
    }
    while(fila.size()!=0)
    {
        a++;
        for(int i=0; i<n; i++)
        {
            vetor3[i]++;
            if(vetor3[i]==vetor2[i])
            {
                if(fila.size()!=0)
                {
                    vetor2[i]=fila.front() * vetor[i];
                    fila.pop();
                    vetor3[i]=0;
                }
            }
        }
    }
    int z=0;
    while(z!=n)
    {
        a++;
        for(int i=0; i<n; i++)
        {
            vetor3[i]++;
            if(vetor3[i]>=vetor2[i])
            {
                vetor2[i]=99999999999999924;
                z++;
            }
        }
    }
    cout<<a<<endl;
}
