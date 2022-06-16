	#include <bits/stdc++.h>

	using namespace std;
	
	stack<string> fila;
	
	void funcao(string forma, int N, int contadora, int contadorb, int counta, int countb)
	{
	    string a, b;
	    a=forma + '0';
	    b= forma + '1';
	    int ta=a.size();
	    if(ta<N && contadorb<countb)
	    {
	        contadorb++;
	        funcao(b, N, contadora, contadorb, counta, countb);
	        contadorb--;
	    }
	    if(ta<N && contadora<counta)
	    {
	        contadora++;
	        funcao(a, N, contadora, contadorb, counta, countb);
	        contadora--;
	    }
    	    if(a.size()==N && contadora==(counta - 1))
    	    {
    	        fila.push(a);
    	    }
    	    if(b.size()==N && contadorb==(countb - 1))
    	    {
    	        fila.push(b);
    	    }
	}
	
	int main()
	{
	    int N;
	    string txt;
	    cin>>N;
	    for(int i=0; i<N; i++)
	    {
	        if(i!=0)
	        {
	            cout<<endl;
	        }
	        cin.ignore();
	        getline(cin, txt);
	        int n, h;
	        cin>>n>>h;
	        int a=n - h;
	        int b=h;
	        string forma="";
	        funcao(forma, n, 0, 0, a, b);
	        while(fila.size()!=0)
	        {
	            cout<<fila.top()<<endl;
	            fila.pop();
	        }
	    }
	}


