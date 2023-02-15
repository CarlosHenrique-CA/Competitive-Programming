#include <bits/stdc++.h>

using namespace std;

int solve(string x, string y)
{
    string b= y + "&" + x;
    int p=0;
    int t=b.size();
    for(int i=1; i<t; i++)
    {
        if(b[p]==b[i])
        {
            p++;
        }
        else
        {
            p=0;
        }
    }
    return p;
}

int main()
{
    string x;
    while(cin>>x)
    {
        string y=x;
        reverse(y.begin(), y.end());
        int a=solve(x, y);
        string ain=y.substr(a);
        int t=ain.size();
        int te=x.size() - t;
        int j=0;
        for(int i=te; i<x.size(); i++)
        {
            if(x[i]==ain[j])
            {
                j++;
            }
            else
            {
                j=0;
            }
        }
        cout<<x;
        for(int i=j; i<t; i++)
        {
            cout<<ain[i];
        }
        cout<<endl;
    }
}
