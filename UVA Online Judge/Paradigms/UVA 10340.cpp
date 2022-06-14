#include <iostream>

using namespace std;

int main()
{
	string ex, pen;
	while(cin>>ex>>pen)
	{
		int ta=ex.size();
			int t2=pen.size();
			int result=0;
			int cnt=0;
			for(int i=0; i<t2; i++)
			{
				if(pen[i]==ex[cnt])
				{
					cnt++;
					if(cnt==ta)
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
