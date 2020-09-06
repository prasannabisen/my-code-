#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<string>l1;
	l1.push_back("apple");
	l1.push_back("pineapple");
	l1.push_back("guava");
	for(string a:l1)
	{
		cout<<a<<"<-->";
	}
	cout<<"\n";
	/*string f;
	cin>>f;
	//use of remove method
	l1.remove(f);
	for(string a:l1)
	{
		cout<<a<<"<-->";
	}*/
	// use of erase 
	/*auto it=l1.begin();
	it++;
	it++;
	l1.erase(it);
	for(string b:l1)
	{
		cout<<b<<"<-->";
	}*/
	auto it=l1.begin();
	it++;
	cout<<"\n";
	l1.insert(it,"friut juice");
	for(auto a:l1)
	{
		cout<<a<<"<-->";
	}
}