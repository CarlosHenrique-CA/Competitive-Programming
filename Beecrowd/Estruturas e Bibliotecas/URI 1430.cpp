#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
	string palavra;
	getline(cin, palavra);
	while(palavra[0]!='*')
	{
		int ta=palavra.size();
		int cnt=0;
		double z=0;
		for(int i=0; i<ta; i++)
		{
			if(palavra[i]=='/')
			{
				if(z==1)
				{
					cnt++;
				}
				z=0;
			}
			if(palavra[i]=='W')
			{
				z+=1;
			}
			if(palavra[i]=='H')
			{
				z+=1.0/2.0;
			}
			if(palavra[i]=='Q')
			{
				z+=1.0/4.0;
			}
			if(palavra[i]=='E')
			{
				z+=1.0/8.0;
			}
			if(palavra[i]=='S')
			{
				z+=1.0/16.0;
			}
			if(palavra[i]=='T')
			{
				z+=1.0/32.0;
			}
			if(palavra[i]=='X')
			{
				z+=1.0/64.0;
			}
		}
		cout<<cnt<<endl;
		getline(cin,palavra);
	}
}
