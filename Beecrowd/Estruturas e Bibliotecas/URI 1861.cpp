#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<string, int> m;
	vector<string> vecitor;
	map<string, int> :: iterator it;
	string mato, morto;
	int j=0;
	while (cin>>mato>>morto && mato!="a")
	{
		++m[mato];
		vecitor.push_back(morto);
		j++;
	}
	cout<<"HALL OF MURDERERS\n";
	int ta=vecitor.size();
	for(int i = 0; i<ta; ++i)
	{
		it=m.find(vecitor.back());
		vecitor.pop_back();
		if(it!=m.end())
		{
			m.erase(it);
		}
	}
	for(it=m.begin(); it!=m.end(); it++)
	{
		cout << it->first << ' ' << it->second << '\n';
	}
}
