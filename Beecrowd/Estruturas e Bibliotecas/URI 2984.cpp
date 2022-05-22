#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    stack<char> pilha;
    char palavra[100000];
    cin>>palavra;
    int jota=0;
    while(palavra[jota]!='\0')
    {
        if(palavra[jota]=='(')
        {
            pilha.push(palavra[jota]);
        }
        if(palavra[jota]==')')
        {
            if(pilha.size()!=0 && pilha.top()=='(')
            {
                pilha.pop();
            }
        }
        jota++;
    }
    if(pilha.size()==0)
    {
        cout<<"Partiu RU!"<<endl;
    }
    else
    {
        cout<<"Ainda temos "<<pilha.size()<<" assunto(s) pendente(s)!"<<endl;
    }
}
