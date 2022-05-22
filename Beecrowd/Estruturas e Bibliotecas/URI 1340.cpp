#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
	int N;
	while(cin>>N)
	{
		queue<int> fila;
		priority_queue<int> prioridade;
		stack<int> pilha;
		queue<string> salvar;
		int x, y;
		int a=0, b=0, c=0;
		for(int i=0; i<N; i++)
		{
			cin>>x>>y;
			if(x==1)
			{
				if(a==0)
				{
					pilha.push(y);
				}
				if(b==0)
				{
					prioridade.push(y);
				}
				if(c==0)
				{
					fila.push(y);
				}
			}
			if(x==2)
			{
				if(a==0)
				{
					if(pilha.top()==y)
					{
						pilha.pop();
					}
					else
					{
						a=1;
					}
				}
				if(b==0)
				{
					if(prioridade.top()==y)
					{	
						prioridade.pop();
					}
					else
					{
						b=1;
					}
				}
				if(c==0)
				{
					if(fila.front()==y)
					{
						fila.pop();
					}
					else
					{
						c=1;
					}
				}
			}
		}
		if(c==0)
		{
			salvar.push("queue");
		}
		if(b==0)
		{
			salvar.push("priority queue");
		}
		if(a==0)
		{
			salvar.push("stack");
		}
		if(salvar.size()==0)
		{
			cout<<"impossible"<<endl;
		}
		else
		{
			if(salvar.size()>1)
			{
				cout<<"not sure"<<endl;
			}
			else
			{
				cout<<salvar.front()<<endl;
			}
		}
	}
}
