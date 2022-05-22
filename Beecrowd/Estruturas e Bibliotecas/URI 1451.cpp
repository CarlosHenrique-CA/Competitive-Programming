#include <bits/stdc++.h>

using namespace std;

int main()
{
        string palavra;
        while(cin>>palavra)
        {
            list<char> lista;
            list<char>::iterator it;
        	it=lista.begin();
        	for(int i=0; palavra[i]!='\0'; i++) 
        	{
        		if(palavra[i]==']') 
        		{
        			it=lista.end();
        		}
        		else if(palavra[i]=='[') 
        		{
        			it=lista.begin();
        		}
        		if(palavra[i]!='[' && palavra[i]!=']') 
        		{
        			lista.insert(it, palavra[i]);
        		}
        	}
        	for(it=lista.begin(); it!=lista.end(); it++)
        	{
        		cout<<*it;
        	}
        	cout<<endl;
        }
}
