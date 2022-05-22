#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, m;
    while(cin>>n>>m)
    {
        int i, k, j, v, aaa;
        map<int, vector<int>>mapa;
    	for(i=0; i<n; i++)
    	{
    		cin>>aaa;
    		mapa[aaa].push_back(i);
    	}
    	for(i=0; i<m; i++)
    	{
    	    int total=0;
    		cin>>k>>v;
    		if(mapa[v].size()<k)
    		{
    		    cout<<total<<endl;
    		}
    		else
    		{
    		    total=mapa[v][k-1] + 1;
    		    cout<<total<<endl;   
    		}
    	}
	}
}
