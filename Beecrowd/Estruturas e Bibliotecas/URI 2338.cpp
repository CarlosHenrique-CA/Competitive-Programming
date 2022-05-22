#include <iostream>
 
using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++)
    {
        string palavras="";
        string texto;
        getline(cin, texto);
        int ta=texto.size();
        string palavra;
        for(int j=0; j<ta; j++)
        {
            int a=0;
            if(texto[j]=='.' && texto[j + 1]=='.')
            {
                if(texto[j]=='.' && texto[j + 1]=='.' && texto[j + 2]=='.' && texto[j + 3]=='.' && texto[j + 4]=='.' && texto[j + 5]=='.' && texto[j + 6]=='.')
                {
                    j++;
                    j++;
                    j++;
                    j++;
                    a++;
                }
                j++;
                j++;
                palavra=palavras;
                palavras="";
                
            if(palavra=="=.===") 
            {
                printf("a");
            }
            else if(palavra=="===.=.=.=")
            {
                printf("b");
            }
            else if(palavra== "===.=.===.=")
            {
                printf("c");
            }
            else if( palavra=="===.=.=")
            {
                printf("d");
            }
            else if(palavra=="=")
            {
                printf("e");
            }
            else if(palavra=="=.=.===.=")
            {
                printf("f");
            }
            else if(palavra=="===.===.=")
            {
                printf("g");
            }
            else if(palavra=="=.=.=.=") printf("h");
            else if(palavra=="=.=") printf("i");
            else if(palavra=="=.===.===.===") printf("j");
            else if(palavra=="===.=.===") printf("k");
            else if(palavra=="=.===.=.=") printf("l");
            else if(palavra=="===.===") printf("m");
            else if(palavra=="===.=") printf("n");
            else if(palavra=="===.===.===") printf("o");
            else if(palavra=="=.===.===.=") printf("p");
            else if(palavra=="===.===.=.===") printf("q");
            else if(palavra=="=.===.=") printf("r");
            else if(palavra=="=.=.=") printf("s");
            else if(palavra=="===") printf("t");
            else if(palavra=="=.=.===") printf("u");
            else if(palavra=="=.=.=.===") printf("v");
            else if(palavra=="=.===.===") printf("w");
            else if(palavra=="===.=.=.===") printf("x");
            else if(palavra=="===.=.===.===") printf("y");
            else if(palavra=="===.===.=.=") printf("z");
            }
            else
            {
                palavras+=texto[j];
            }
            if(a!=0)
            {
                cout<<" ";
            }
        }
        palavra=palavras;
            if(palavra=="=.===") printf("a");
            else if(palavra=="===.=.=.=") printf("b");
            else if(palavra== "===.=.===.=") printf("c");
            else if( palavra=="===.=.=") printf("d");
            else if(palavra=="=") printf("e");
            else if(palavra=="=.=.===.=") printf("f");
            else if(palavra=="===.===.=") cout<<"g";
            else if(palavra=="=.=.=.=") printf("h");
            else if(palavra=="=.=") printf("i");
            else if(palavra=="=.===.===.===") printf("j");
            else if(palavra=="===.=.===") printf("k");
            else if(palavra=="=.===.=.=") printf("l");
            else if(palavra=="===.===") printf("m");
            else if(palavra=="===.=") printf("n");
            else if(palavra=="===.===.===") printf("o");
            else if(palavra=="=.===.===.=") printf("p");
            else if(palavra=="===.===.=.===") printf("q");
            else if(palavra=="=.===.=") printf("r");
            else if(palavra=="=.=.=") printf("s");
            else if(palavra=="===") printf("t");
            else if(palavra=="=.=.===") printf("u");
            else if(palavra=="=.=.=.===") printf("v");
            else if(palavra=="=.===.===") printf("w");
            else if(palavra=="===.=.=.===") printf("x");
            else if(palavra=="===.=.===.===") printf("y");
            else if(palavra=="===.===.=.=") printf("z");
        cout<<endl;
    }
}
