#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int n, m;
    int i=0;
    multiset<int>::iterator it;
    while(scanf("%d %d", &n, &m) && n!=0 && m!=0)
    {
        i++;
        cout<<"CASE# "<<i<<":"<<endl;
        int x[n];
        multimap<int, int> mapa;
        multimap<int, int>::iterator it;
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }
        sort(x, x+n);
        for(int i=0; i<n; i++)
        {
			mapa.insert({x[i], i + 1});
		}
        for(int i=0; i<m; i++)
        {
            scanf("%d", &x[i]);
            it=mapa.find(x[i]);
            if(it==mapa.end())
            {
				cout<<x[i]<<" not found"<<endl;
			}
			else
			{
				cout<<x[i]<<" found at "<<it->second<<endl;
			}
        }
    }
}
