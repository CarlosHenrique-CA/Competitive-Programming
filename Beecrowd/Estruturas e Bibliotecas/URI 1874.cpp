#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int l, h, bloco;
    cin>>l>>h>>bloco;
    while(l!=0 && h!=0 && bloco!=0)
    {
        queue<int> fila;
        int matriz[l][h];
        int x;
        for(int i=0; i<l; i++)
        {
            for(int j=0; j<h; j++)
            {
                cin>>matriz[i][j];
            }
        }
        for(int i=0; i<bloco; i++)
        {
            cin>>x;
            fila.push(x);
        }
        for(int i=h - 1; i>=0; i--)
        {
            for(int j=l - 1; j>=0; j--)
            {
                if(fila.size()==0)
                {
                    break;
                }
                if(matriz[j][i]==0)
                {
                    matriz[j][i]=fila.front();
                    fila.pop();
                }
            }
        }
        for(int i=0; i<l; i++)
        {
            for(int j=0; j<h; j++)
            {
                if(j!= h - 1)
                {
                    cout<<matriz[i][j]<<" ";
                }
                else
                {
                    cout<<matriz[i][j]<<endl;
                }
            }
        }
        cin>>l>>h>>bloco;
    }
}
