#include <bits/stdc++.h>

using namespace std;

long int somaa;

int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
            {
				somaa+=i;
                cnt++;
			}
 
            else 
            {
				somaa+=n/i;
				somaa+=i;	
				// Otherwise count both
                cnt = cnt + 2;
			}
        }
    }
    return cnt;
}

int main()
{
	int m;
	cin>>m;
	while(m--)
	{
		int n, m, k;
		cin>>n>>m>>k;
		long int contador=0;
		long int soma=0;
		for(int i=n; i<=m; i++)
		{
			if(i%k==0)
			{
				somaa=0;
				contador+=countDivisors(i);
				soma+=somaa;
			}
		}
		cout<<contador<<" "<<soma<<endl;
	}
}
