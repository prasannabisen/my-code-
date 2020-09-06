#include<iostream>
using namespace std;
bool isodd(int a)
{
	return (a&1);
}
int main()
{
	int a;
	cin>>a;
	if(isodd(a))
	{
		cout<<"odd";
	}
	else
	{
		cout<<"even";
	}
}