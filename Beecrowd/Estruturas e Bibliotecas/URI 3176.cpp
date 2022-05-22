#include <bits/stdc++.h>
 
using namespace std;
 
bool ordenas(pair<int,string>a,pair<int,string>b){
	if(a.first>b.first)
	{
		return a.first>b.first;
	}
	if(a.first==b.first && a.second<b.second)
	{
		return  a.second<b.second;
	}
	return false;
}
 
int main() 
{
	int q,i;
	cin >> q;
	vector<pair<int, string>> v;
	for(i=0;i<q;i++)
	{
		int id;
		string n;
		cin >> n >> id;
		v.push_back({id,n});
	}
	int total=q/3;
	sort(v.begin(), v.end(), ordenas);
	for(i=0; i<total; i++)
	{	
		cout<<"Time "<<i + 1<<endl;
		cout << v[i].second << " " << v[i].first << "\n";
		cout << v[i+total].second << " " << v[i + total].first << "\n";
		cout << v[i+total+total].second << " " << v[i+ total + total].first << "\n";
		cout<<endl;
	}
}
