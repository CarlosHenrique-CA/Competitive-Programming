#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++)
    {
        multimap<int, string, greater<int> > mymap;
        multimap<int, string>::iterator it;
        string texto;
        string palavra="";
        getline(cin, texto);
        int ta=texto.size();
        int a=0;
        for(int j=0; j<ta; j++)
        {
            if(texto[j]==' ')
            {
                int tamain=palavra.size();
                mymap.insert(make_pair(tamain, palavra));
                palavra="";
                a++;
            }
            else
            {
                palavra+=texto[j];
            }
        }
        a++;
        int tamain=palavra.size();
        mymap.insert(make_pair(tamain, palavra));
        palavra="";
        it=mymap.begin();
        for (int j=0; j<a; j++)
        {
            if(j!= a - 1)
            {
                cout<<it->second<<" ";
            }
            else
            {
                cout<<it->second<<endl;   
            }
            it++;
        }
    }
}
