//multi map have multi key 
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	multimap<char,string>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char ch;
		string s;
		cin>>ch>>s;
		m.insert(make_pair(ch,s));
	}

	/*for(auto a:m)
	{
		cout<<a.first<<"-->"<<a.second<<endl;
	}*/
	/*auto it=m.begin();
	m.erase(it);*/

	//to find particular
	auto it4=m.lower_bound('b');

	for(auto it3=m.begin();it3!=it4;it3++)
	{
		cout<<it3->second<<"-->";
	}
}
