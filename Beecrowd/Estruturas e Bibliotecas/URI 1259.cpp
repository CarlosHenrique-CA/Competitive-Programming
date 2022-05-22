#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    multiset<int> x;
    multiset<int> y;
    multiset<int>:: iterator it;
    int N;
    cin>>N;
    int z;
    for(int i=0; i<N; i++)
    {
        cin>>z;
        if(z%2==0)
        {
            x.insert(z);
        }
        else
        {
            y.insert(z);
        }
    }
    for(it=x.begin(); it!=x.end(); it++)
    {
        cout<<*it<<endl;
    }
    int pen=0;
    for(it=y.end(); it!=y.begin(); it--)
    {
        if(pen==0)
        {
            it--;
            pen=124;
        }
        cout<<*it<<endl;
    }
    if(y.size()!=0)
    {
        cout<<*it<<endl;
    }
}
