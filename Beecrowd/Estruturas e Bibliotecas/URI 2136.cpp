#include <algorithm>
#include <iostream>

using namespace std;
 
int main() 
{
    string nome[10000];
    string escolha[10000];
    int maior=0;
    string salvar;
    int i=0;
    cin>>nome[i];
    while(nome[i]!="FIM")
    {
        cin>>escolha[i];
        if(nome[i].size()>maior && escolha[i]=="YES")
        {
            maior=nome[i].size();
            salvar=nome[i];
        }
        i++;
        cin>>nome[i];
    }
    string nome2[i];
    int cnt=0;
    int cnt2=0;
    string nome3[i];
    for(int carlos=0; carlos<i; carlos++)
    {
        if(escolha[carlos]=="YES")
        {
            nome2[cnt]=nome[carlos];
            cnt++;
        }
        else
        {
            nome3[cnt2]=nome[carlos];
            cnt2++;
        }
    }
    sort(nome2,nome2+cnt);
    sort(nome3,nome3+cnt2);
    for(int aa=0; aa<cnt; aa++)
    {
         if(aa==0)
         {
        cout<<nome2[aa]<<endl;
        }
        else
        {
            if(nome2[aa]!=nome2[aa - 1])
            {
                cout<<nome2[aa]<<endl;
            }
        }
    }
    for(int aa=0; aa<cnt2; aa++)
    {
        if(aa==0)
        {
        cout<<nome3[aa]<<endl;
        }
        else
        {
            if(nome3[aa]!=nome3[aa - 1])
            {
                cout<<nome3[aa]<<endl;
            }
        }
    }
    cout<<endl;
    cout<<"Amigo do Habay:"<<endl;
    cout<<salvar<<endl;
}
