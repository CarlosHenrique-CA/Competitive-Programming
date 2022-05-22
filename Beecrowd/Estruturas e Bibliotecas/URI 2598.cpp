#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N, M;
    cin>>N>>M;
    int mult=N*M;
    string vetor[mult];
    for(int i=0; i<mult; i++)
    {
		cin>>vetor[i];
    }
    sort(vetor, vetor+mult);
    for(int i=mult - 1; i>=0; i--)
    {
        string s=vetor[i];
        if(s[1]=='V')
        {
			cout<<s<<endl;
		}
    }
    for(int i=mult - 1; i>=0; i--)
    {
        string s=vetor[i];
        if(s[1]=='D')
        {
			cout<<s<<endl;
		}
    }
}
