#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N;
    cin>>N;
    map<string, string>mapa;
    string frase;
    string idioma;
    for(int i=0; i<N; i++)
    {
        cin>>idioma;
        cin.ignore();
        getline(cin, frase);
        mapa[idioma] = frase;
    }
    int numero;
    cin>>numero;
    map<string, string>:: iterator it;
    for(int j=0; j<numero; j++)
    {
        string nome;
        cin.ignore();
        getline(cin, nome);
        string idioam;
        cin>>idioam;
        it=mapa.find(idioam);
        if(it!=mapa.end())
	    {
	        cout<<nome<<endl;
	        cout<<it->second<<endl<<endl;
		}
    }
}
