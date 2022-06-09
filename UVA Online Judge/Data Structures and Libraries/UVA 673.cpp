#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin>>N;
	cin.ignore();
	for(int a=0; a<N; a++)
	{
		stack<char> pia, pia2;
		string txt;
		getline(cin, txt);
		int ta=txt.size();
		int z=0;
		for(int i=0; i<ta; i++)
		{
			if(txt[i]=='(')
			{
				pia.push(txt[i]);
			}
			else
			{
				if(txt[i]=='[')
				{
					pia.push(txt[i]);
				}
				else
				{
					if(txt[i]==')')
					{
						if(pia.size()==0 || pia.top()!='(')
						{
							z++;
						}
						else
						{
							pia.pop();
						}
					}
					else
					{
						if(txt[i]==']')
						{
							if(pia.size()==0 || pia.top()!='[')
							{
								z++;
							}
							else
							{
								pia.pop();
							}
						}
					}
				}
			}
		}
		if(pia.size()!=0)
		{
			z++;
		}
		if(z!=0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}
