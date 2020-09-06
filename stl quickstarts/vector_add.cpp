#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		int no;
		cin>>no;
		v.push_back(no); //also increase the memory if needed
	}
	for(int x:v)
	{
		cout<<x<<",";
	}
	/* what are the difference btw vector in memory level */
	cout<<"\n"<<v.size()<<"\n";
	cout<<v.capacity()<<"\n";
	cout<<v.max_size()<<"\n";
}