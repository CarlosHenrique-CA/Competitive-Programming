#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int N;
    cin>>N;
    while(N!=0)
    {
		int vetor[N];
		int vetor2[N];
        int cnt=0;
        int jota=0;
        for(int i=0; i<N; i++)
        {
			vetor[i]=i+1;
		}
        for(int k=0; k<N; k++)
        {
			if(k==0)
			{
				cin>>vetor2[k];
			}
			else
			{
				if(vetor2[0]!=0)
				{
				cin>>vetor2[k];
				}
			}
        }
        while(vetor2[0]!=0)
        {
			stack<int> x;
			x.push(vetor[jota]);
			jota++;
            while(x.size()!=0)
            {	
				if(cnt<N)
				{
					while(x.size()>0 && vetor2[cnt]== x.top())
					{
						if(cnt<N)
						{
						cnt++;
						x.pop();
						}
						if(cnt==N)
						{
							break;
						}
					}
						if(jota<N)
						{
						x.push(vetor[jota]);
						jota++;
						}
						else
						{
							if(cnt<N && vetor2[cnt]!= x.top())
							{
								break;
							}
						}
				}
            }
            if(cnt==N)
            {
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
        for(int k=0; k<N; k++)
        {
			if(k==0)
			{
				cin>>vetor2[k];
			}
			else
			{
				if(vetor2[0]!=0)
				{
				cin>>vetor2[k];
				}
			}
        }
        jota=0;
        cnt=0;
        }
        cin>>N;
        cout<<endl;
    }
}
