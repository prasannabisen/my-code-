#include<iostream>
using namespace std;
int todecimal(int n)
{
	int num,a,b=1;
	while(n!=0)
	{
		a=n&1;
		num+=a*b;
		b=b*10;
		n=n>>1;
	}
	return num;
}
int main()
{
	int n;
	cin>>n;
	cout<<todecimal(n);
}