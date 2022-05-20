#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
	long int N, G;
	while(cin>>N>>G)
	{
		int pontos=0;
		int S[N], R[N];
		int total[N];
		int cnt=0;
		for(int i=0; i<N; i++)
		{
			cin>>S[i]>>R[i];
			if(S[i]>R[i])
			{
				pontos=pontos + 3;
				S[i]= - 1;
				R[i]= - 1;
			}
			else
			{
				total[cnt]= R[i] - S[i];
				cnt++;
			}
		}
		sort(total, total+cnt);
		for(int i=0; i<cnt; i++)
		{
			while(G!=0 && total[i]>=0)
			{
				G--;
				total[i]--;
				if(total[i]<0)
				{
					pontos=pontos + 3;
				}
			}
		}
		for(int i=0; i<cnt; i++)
		{
			if(total[i]==0)
			{
				pontos++;
			}
		}
		cout<<pontos<<endl;
	}
}
