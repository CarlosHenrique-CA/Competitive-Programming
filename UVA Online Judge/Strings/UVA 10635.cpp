#include <bits/stdc++.h>

using namespace std;

int LongestIncreasingSubsequenceLength(vector<int>& v)
{
    if (v.size() == 0) // boundary case
        return 0;
 
    vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail
 
    tail[0] = v[0];
 
    for (int i = 1; i < v.size(); i++) {
 
        // Do binary search for the element in
        // the range from begin to begin + length
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);
 
        // If not present change the tail element to v[i]
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
 
    return length;
}


int main() 
{
    int cases;
    cin >> cases;
    for (int curr_case = 1; curr_case <= cases; curr_case++) 
    {
        int n, p, q;
        cin>>n>>p>>q;
        int vet[251 * 251];
        memset(vet,-1,sizeof(vet));
        for(int i=0; i<=p; i++)
        {
            int x;
            cin>>x;
            vet[x]=i;
        }
        vector<int> ans;
        for(int i=0; i<=q; i++)
        {
            int x;
            cin>>x;
            if(vet[x]!= - 1)
            {
                ans.push_back(vet[x]);
            }
        }
        cout<<"Case "<<curr_case<<": "<<LongestIncreasingSubsequenceLength(ans)<<endl;
    }
}
