#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l;

	list<int>l1{1,2,3,4,5,6,7,8,9};

	list<string> l2{"apple","bananna","mango"};
	l2.push_back("pineapple");

	l2.sort();
	l2.reverse();
	cout<<l2.front()<<"\n";
	l2.pop_front();
	for(string a:l2)
	{
		cout<<a<<"<-->";
	}
	cout<<"\n";
}