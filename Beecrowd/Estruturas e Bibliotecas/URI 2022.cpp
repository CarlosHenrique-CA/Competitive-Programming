#include <bits/stdc++.h>
 
using namespace std;

bool ordenas(pair<string,pair<int,double>>a,pair<string,pair<int,double>>b){
	if(a.second.first>b.second.first)
	{
		return a.second.first>b.second.first;
	}
	if(a.second.first==b.second.first && a.second.second<b.second.second)
	{
		return  a.second.second<b.second.second;
	}
	if(a.second.first==b.second.first && a.second.second==b.second.second && a.first<b.first)
	{
		return  a.first<b.first;
	}
	return false;
};

int main() 
{
    string nome;
    int qnt;
    while(cin>>nome>>qnt)
    {
        vector<pair<string,pair<int,double>>> vecitor;
        string presente;
        double valor; 
        int pref;
        cin.ignore();
        for(int i=0; i<qnt; i++)
        {
            getline(cin, presente);
            cin>>valor>>pref;
            cin.ignore();
            vecitor.push_back({presente,{pref, valor}});
        }
        sort(vecitor.begin(), vecitor.end(), ordenas);
        cout<<"Lista de "<<nome<<endl;
        for(int i=0; i<qnt; i++)
        {
            cout<<vecitor[i].first<<" - R$";
            cout<<fixed<<setprecision(2)<<vecitor[i].second.second<<endl;
        }
        cout<<endl;
    }
}
