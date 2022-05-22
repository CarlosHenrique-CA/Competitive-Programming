#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    int cnt;
    int jota;
    stack<char> x;
    char vetor[30];
	char vetor2[30];
    while(N!=0)
    {
        while(x.size()!=0)
        {
            x.pop();
        }
		jota=0;
		cnt=0;
		for(int i=0; i<N; i++)
		{
			cin>>vetor[i];
		}
		for(int i=0; i<N; i++)
		{
			cin>>vetor2[i];
		}
		x.push(vetor[jota]);
		cout<<"I";
		while(jota < N)
		{
			while(x.size()>0 && vetor2[cnt]==x.top())
			{
					x.pop();
					cout<<'R';
					cnt++;
			}
			if(jota<N - 1)
			{
				jota++;
				x.push(vetor[jota]);
				cout<<'I';
			}
			if(jota==N - 1)
			{
				jota++;
			}
			if(jota==N)
			{
				while(x.size()>0 && vetor2[cnt]==x.top())
				{
						x.pop();
						cout<<'R';
						cnt++;
				}
			}
		}
		if(x.size()==0)
		{
		cout<<endl;
		}
		else
		{
		cout<<" Impossible"<<endl;
		}
		cin>>N;
	}
}
