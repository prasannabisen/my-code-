#include<iostream>
using namespace std;
int main()
{
	int n,no;
	cin>>n;
	int xo=0;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		xo=a[i]^xo;
	}

	int temp=xo;
	int pos=0;
	while((temp&1)==0)
	{
		temp=temp>>1;
		pos++;
	}
	int f=0,s=0;
	int mask=1<<pos;
	for(int i=0;i<n;i++)
	{
		if((a[i]&mask)>0)
		{
			f=f^a[i];
		}
	}
	s=xo^f;

	cout<<f<<endl<<s;
}