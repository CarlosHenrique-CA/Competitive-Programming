#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int N;
    cin>>N;
    cin.ignore();
    int vetor[4];
    for(int i=0; i<4; i++)
    {
        vetor[i]=0;
    }
    for(int i=0; i<N; i++)
    {
        string palpite, vencedores, palpites;
        string palpit[4];
        cin>>palpite;
        cin.ignore();
        for(int j=0; j<4; j++)
        {
            getline(cin, palpites);
            palpit[j]=palpites;
        }
        cin>>vencedores;
        cin.ignore();
        for(int j=0; j<4; j++)
        {
            getline(cin, palpites);
            if(palpit[j]==palpites)
            {
                vetor[j]++;
            }
        }
    }
    if(vetor[0]<=vetor[1] && vetor[0]<=vetor[2] && vetor[0]<=vetor[3])
    {
        cout<<1;
        if(vetor[0]==vetor[1])
        {
            cout<<" "<<2;
        }
        if(vetor[0]==vetor[2])
        {
            cout<<" "<<3;
        }
        if(vetor[0]==vetor[3])
        {
            cout<<" "<<4;
        }
        cout<<endl;
    }
    else
    {
        if(vetor[1]<=vetor[2] && vetor[1]<=vetor[3])
        {
            cout<<2;
            if(vetor[1]==vetor[2])
            {
                cout<<" "<<3;
            }
            if(vetor[1]==vetor[3])
            {
                cout<<" "<<4;
            }
            cout<<endl;
        }
        else
        {
            if(vetor[2]<=vetor[3])
            {
                cout<<3;
                if(vetor[2]==vetor[3])
                {
                    cout<<" "<<4;
                }
                cout<<endl;
            }
            else
            {
                cout<<4<<endl;
            }
        }
    }
}
