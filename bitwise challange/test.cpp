#include<iostream>
using namespace std;
int main()
{
	int n,a[20],xo=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		xo=xo^a[i];
	}
	int pos=0,temp=xo;
	while((xo&1)==0)
	{
		pos++;
		temp=temp>>1;
	}
	int s=0,e=0,mask=1<<pos;
	for(int i=0;i<n;i++)
	{
		if((mask&a[i])>0)
		{
			s=s^a[i];
		}
	}
	e=s^xo;
	cout<<min(e,s)<<" "<<max(e,s);
}