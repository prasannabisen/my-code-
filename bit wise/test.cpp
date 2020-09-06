#include<iostream>
using namespace std;
int clearbit(int n,int i,int j)
{
	int b;
	int a=~0;
	a=a<<(i+1);
	b=(1<<j)-1;
	int mask=a|b;
	return(mask&n);
}
int replace(int ne,int pl,int i,int j)
{
	pl=pl<<j;
	return(ne|pl);
}
int main()
{
	int n,i,j;
	cin>>n>>i>>j;
	int ne=clearbit(n,i,j);
	int pl;
	cin>>pl;
	cout<<replace(ne,pl,i,j);
}