#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;
        priority_queue<int> fila;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            fila.push(x);
        }
        int menor=fila.top();
        int maior;
        while(fila.size()!=1)
        {
            fila.pop();
        }
        maior=fila.top();
        int z=maior - menor;
        z= abs(z * 2);
        cout<<z<<endl;
    }
}
