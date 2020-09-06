#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>a={1,3,5,10,14};
	a.push_back(20);

	//push_back of order(1)
	for(int x:a)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	a.pop_back();
	for(int x:a)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	a.insert(a.begin()+2,100);
	for(int x:a)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	a.insert(a.begin()+2,3,150);
	for(int x:a)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	//erase
	a.erase(a.begin()+3);
	for(int x:a)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	a.erase(a.begin()+2,a.begin()+5);
	for(int x:a)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	if(!a.empty())
	{
		cout<<"this is not empty";
	}

	cout<<"\n"<<a.front()<<"\n";
	cout<<"\n"<<a.back()<<"\n";

	//wrong method use reserve method to over come this method
	int n;
	cin>>n;
	vector<int> v;
	v.reserve(n);
	cout<<"capacity"<<v.capacity();
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		v.push_back(j);
	}
	for(int x:v)
	{
		cout<<x<<",";
	}



}