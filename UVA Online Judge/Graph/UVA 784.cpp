	#include <bits/stdc++.h>

	using namespace std;

	char matriz[105][105];
	int tei[105];
	void floodfill(int i, int j)
	{
	    matriz[i][j]='#';
    	if((i + 1)>0 && matriz[i - 1][j]==' ')
        {
            floodfill(i - 1, j);
        }
        if(matriz[i + 1][j]==' ')
        {
            floodfill(i + 1, j);
        }
        if((j + 1)>0 && matriz[i][j - 1]==' ')
        {
            floodfill(i, j - 1);
        }
        if(matriz[i][j + 1]==' ')
        {
            floodfill(i, j + 1);
        }
	}
	int main()
	{
	    int N;
	    cin>>N;
	    cin.ignore();
	    string txt;
	    for(int i=0; i<N; i++)
	    {
	        int salvar, salvar2;
	        int j=0;
    	    while(getline(cin, txt) && txt[0]!='_')
    	    {
    	        int ta=txt.size();
    	        tei[j]=ta;
    	        for(int i=0; i<ta; i++)
    	        {
    	            matriz[j][i]=txt[i];
    	            if(txt[i]=='*')
    	            {
    	                salvar=j;
    	                salvar2=i;
    	            }
    	        }
    	        j++;
    	    }
    	    floodfill(salvar, salvar2);
    	    for(int i=0; i<j; i++)
    	    {
    	        for(int a=0; a<tei[i]; a++)
    	        {
    	            cout<<matriz[i][a];
    	        }
    	        cout<<endl;
    	    }
    	    cout<<txt<<endl;
	    }
	}


