#include <bits/stdc++.h>

using namespace std;

int pd[71][71];

int back(int N, int T, int P, int total, int cnt)
{
	
	if (total == T and cnt == N) return 1;
	
	if (cnt==N)
	{
		return 0;
	}
	
	if(pd[cnt][total]!= - 1)
	{
		return pd[cnt][total];
	}
	pd[cnt][total]=0;
	int f=(T + P) - (N * P);
	for (int i = P; i <= f; i++){
		
		if (total + i<=T){
			
			pd[cnt][total] += back(N, T, P, total + i, cnt + 1);
			
		}
		
	}
	
	return pd[cnt][total];
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
		for(int i=0; i<71; i++)
		{
			for(int j=0; j<71; j++)
			{
            pd[i][j]= - 1;
			}
		}

        int N, T , P;
        cin>>N>>T>>P;
        if (N* P > T) 
        {
			printf("0\n");
		} 
		else if(N * P== T) 
		{
			printf("1\n");
		}
        else
        {
			cout<<back(N, T, P, 0, 0)<<endl;
        }
    }
}



