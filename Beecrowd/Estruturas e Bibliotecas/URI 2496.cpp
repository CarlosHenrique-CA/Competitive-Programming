#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    string alfabeto= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int N;
        cin>>N;
        char vet[2];
        int salvar, salvarum;
        int cnt=1;
        int pinto=0;
        for(int j=0; j<N; j++)
        {
            char alf;
            cin>>alf;
            if(alf!=alfabeto[j] && cnt==1)
            {
                vet[0]=alf;
                cnt=2;
                salvar=j;
            }
            if(alf!=alfabeto[j] && cnt==2)
            {
                vet[1]=alf;
                salvarum=j;
            }
            if(alf!=alfabeto[j])
            {
                pinto++;
            }
        }
        if(vet[1]==alfabeto[salvar] && vet[0]==alfabeto[salvarum] && pinto<=2)
        {
            cout<<"There are the chance."<<endl;
        }
        else
        {
            cout<<"There aren't the chance."<<endl;
        }
    }
}
