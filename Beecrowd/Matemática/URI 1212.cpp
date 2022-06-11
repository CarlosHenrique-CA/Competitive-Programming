#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
	string n, m;
	int aa=0;
	while(aa==0)
	{
		cin>>n>>m;
		if(n!="0" || m!="0")
		{
		int save=0, save2=0;
		int resolve;
		int a=n.size();
		int b=m.size();
		int cnt=0;
		if(a>b)
		{
		    b--;
			for(int i=(a - 1); i>=0; i--)
			{
				save+=n[i] - 48;
				if(b>=0)
				{
				    save2+=m[b] - 48;
				    b--;
				}
				resolve=save + save2;
				if(resolve>=10)
				{
					cnt++;
					save2=0;
					save=1;
				}
				else
				{
					save2=0;
					save=0;
				}
			}
		}
		else
		{
		    a--;
			for(int i=(b - 1); i>=0; i--)
			{
				save2+=m[i] - 48;
				if(a>=0)
				{
				    save+=n[a] - 48;
				    a--;
				}
				resolve=save + save2;
				if(resolve>=10)
				{
					cnt++;
					save2=0;
					save=1;
				}
				else
				{
					save2=0;
					save=0;
				}
			}
		}
		if(cnt==0)
		{
			cout<<"No carry operation."<<endl;
		}
		else
		{
			if(cnt==1)
			{
				cout<<"1 carry operation."<<endl;
			}
			else
			{
				cout<<cnt<<" carry operations."<<endl;
			}
		}
	}
	else
	{
		aa++;
	}
	}
}
