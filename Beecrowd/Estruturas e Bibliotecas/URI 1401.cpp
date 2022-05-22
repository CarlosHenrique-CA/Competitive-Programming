#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin>>N;
    string a;
    cin.ignore();
    for(int i=0; i<N; i++)
    {
        cin>>a;
        int ta=a.size();
        sort(a.begin(), a.end());
        do
        {
            cout<<a<<endl;   
        }
        while(next_permutation(a.begin(), a.end()));
        cout<<endl;
    }
}
