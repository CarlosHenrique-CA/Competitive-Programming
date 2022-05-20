#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int cnt=1;
    int N, M, k, cu, R=0, H=0, C=0, P=0;
    scanf("%i %i", &N, &M);
    char matriz[N][M], a;
    scanf("%i", &k);
    for(int i=0; i<N; i++)
    {
		for(int j=0; j<M; j++)
		{
			matriz[i][j]=0;
		}
	}
    for(int i=0; i<k; i++)
    {
        cin>>a;
        scanf("%i", &cu);
        if(a=='L')
        {
            for(int j=0; j<M; j++)
            {
                matriz[cu - 1][j]=cnt;
            }
        }
        else
        {
			if(a=='C')
			{
				for(int j=0; j<N; j++)
				{
					matriz[j][cu - 1]=cnt;
				}
			}
		}
        cnt++;
        if(cnt>4)
        {
            cnt=1;
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(matriz[i][j]==1)
            {
                R++;
            }
            else
            {
				if(matriz[i][j]==2)
				{
					H++;
				}
				else
				{
					if(matriz[i][j]==3)
					{
						C++;
					}
					else
					{
						if(matriz[i][j]==4)
						{
							P++;
						}
					}
				}
			}
        }
    }
    cout<<'R'<<R<<" H"<<H<<" C"<<C<<" P"<<P<<endl;
}
