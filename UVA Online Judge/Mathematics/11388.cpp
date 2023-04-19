#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
	long long int n, m;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		long int s=sqrt(n);
		vector<int> v;
		for(int i=1; i<=s; i++)
		{
			if(n%i==0)
			{
				v.push_back(n/i);
				v.push_back(i);
			}
		}
		if(s*s==n)
		{
			v.pop_back();
		}
		sort(v.begin(), v.end());
		int mm=v.size();
		bool sexo=true;
		for(int i=0; i<mm; i++)
		{
			for(int j=mm - 1; j>=i; j--)
			{
				if(lcm(v[i], v[j])==n && gcd(v[i], v[j])==m)
				{
					cout<<v[i]<<" "<<v[j]<<endl;
					sexo=false;
					break;
				}
			}
			if(!sexo)
			{
				break;
			}
		}
		if(sexo)
		{
			cout<<"-1"<<endl;
		}
		
}
	
}
