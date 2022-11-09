#include <bits/stdc++.h>

using namespace std;

int longest_increasing_subsequence(vector<int>& arr)
{
    vector<int> ans;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        auto it
            = lower_bound(ans.begin(), ans.end(), arr[i]);
        if (it == ans.end()) {
            ans.push_back(arr[i]);
        }
        else {
            *it = arr[i];
        }
    }
    return ans.size();
}

int main()
{
    int m;
    cin>>m;
    int cases=0;
    while(m--)
    {
        cases++;
        int n;
        cin>>n;
        int vet[n + 1];
        vector<int> vet2;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            vet[x]=i;
        }
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            vet2.push_back(vet[x]);
        }
        int te=longest_increasing_subsequence(vet2);
        cout<<"Case "<<cases<<": "<<(n - te) * 2<<endl;
    }
}
