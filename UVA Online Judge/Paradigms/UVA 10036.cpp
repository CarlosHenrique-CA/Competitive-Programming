#include <bits/stdc++.h>

using namespace std;

#define cover(a,d) memset(a,d,sizeof(a))

int arr[10005];
int pd[10010][203];
bool sex=false;

bool back(int n, int k, int total, int cnt)
{
    total=total%k;
    if(cnt==n)
    {
        if(total%k==0)
        {
            return true;
        }
        return false;
    }
    if(pd[cnt][total]== - 1)
    {
        return pd[cnt][total]=back(n, k, total + arr[cnt], cnt + 1)|back(n, k, total - arr[cnt], cnt + 1);
    }
    return pd[cnt][total];
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cover(pd,-1);
        int N, k;
        cin>>N>>k;
        for(int h=0; h<N; h++)
        {
            cin>>arr[h];
        }
        sex=back(N, k, arr[0], 1);
        if(sex)
        {
            cout<<"Divisible"<<endl;
        }
        else
        {
            cout<<"Not divisible"<<endl;
        }
    }
}
