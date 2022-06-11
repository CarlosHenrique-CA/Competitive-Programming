#include <iostream>
#include <set>
using namespace std;
int main()
{
	set<string> sete;
	string txt;
	while(cin>>txt)
	{
		sete.insert(txt);
	}
	cout<<sete.size()<<endl;
}
