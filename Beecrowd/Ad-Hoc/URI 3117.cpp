#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
	long int N, K;
	cin>>N>>K;
	int cnt=0;
	int v[N];
	for(int i=0; i<N; i++)
	{
		cin>>v[i];
		if(v[i]<=0)
		{
			cnt++;
		}
	}
	if(cnt>=K)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
