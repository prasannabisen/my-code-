#include<iostream>
using namespace std;

int clear(int a,int i)
{
	int b=~(1<<i);
	int n;
	n=a&b;
	return n;
}
int main()
{
	int a;
	cin>>a;
	int i;
	cin>>i;
	cout<<clear(a,i);
}