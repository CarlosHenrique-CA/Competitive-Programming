#include <iostream>

using namespace std;

int main()
{
	int N;
	cin>>N;
	for(int aaa=0; aaa<N; aaa++)
	{
		string ex;
		cin>>ex;
		int ta=ex.size();
		int n;
		cin>>n;
		for(int a=0; a<n; a++)
		{
			string pen;
			cin>>pen;
			int t2=pen.size();
			int result=0;
			int cnt=0;
			for(int i=0; i<ta; i++)
			{
				if(ex[i]==pen[cnt])
				{
					cnt++;
					if(cnt==t2)
					{
						result++;
						break;
					}
				}
			}
			if(result!=0)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
}
