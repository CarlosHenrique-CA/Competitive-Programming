#include <bits/stdc++.h>
 
using namespace std;

bool ordenas(pair<int,pair<int,pair<int, string>>>a,pair<int,pair<int,pair<int, string>>>b)
{
    if(a.first>b.first)
    {
        return a.first<b.first;
    }
    if(a.second.first>b.second.first && a.first==b.first)
    {
        return a.second.first<b.second.first;
    }
    if(a.second.second.first>b.second.second.first && a.second.first==b.second.first && a.first==b.first)
    {
        return a.second.second.first<b.second.second.first;
    }
    if(a.second.second.second<b.second.second.second && a.second.second.first==b.second.second.first && a.second.first==b.second.first && a.first==b.first)
    {
        return a.second.second.second>b.second.second.second;
    }
    return -1;
}
int main() 
{
    string modalidade;
    vector<pair<int,pair<int,pair<int,string>>>> v;
    while(getline(cin, modalidade))
    {
        string ouro, prata, bronze;
        int z=0;
        getline(cin, ouro);
        int ta=v.size();
        for(int i=0; i<ta; i++)
        {
            if(v[i].second.second.second==ouro)
            {
                v[i].first++;
                z++;
            }
        }
        if(z==0)
        {
            v.push_back({ 1 ,{ 0 ,{ 0, ouro} } });
        }
        z=0;
        getline(cin, prata);
        ta=v.size();
        for(int i=0; i<ta; i++)
        {
            if(v[i].second.second.second==prata)
            {
                v[i].second.first++;
                z++;
            }
        }
        if(z==0)
        {
            v.push_back({ 0 ,{ 1 ,{ 0, prata} } });
        }
        z=0;
        getline(cin, bronze);
        ta=v.size();
        for(int i=0; i<ta; i++)
        {
            if(v[i].second.second.second==bronze)
            {
                v[i].second.second.first++;
                z++;
            }
        }
        if(z==0)
        {
            v.push_back({ 0 ,{ 0 ,{ 1, bronze} } });
        }
        z=0;
    }
    sort(v.begin(), v.end(), ordenas);
    int ta=v.size();
    cout<<"Quadro de Medalhas"<<endl;
    for(int i=ta - 1; i>=0; i--)
    {
        cout<<v[i].second.second.second<<" "<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second.first<<endl;
    }
}
