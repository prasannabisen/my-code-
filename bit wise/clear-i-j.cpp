#include<iostream>
using namespace std;
int clearrange(int n,int k,int j)
{
	int a,b;
	a=~(0);
	a=a<<(j+1);
	b=(1<<k)-1;
	int mask;
	mask=a|b;
	return(n&mask);
}
int main()
{
	int n,j,k;
	cin>>n>>j>>k;
	cout<<clearrange(n,j,k);
}