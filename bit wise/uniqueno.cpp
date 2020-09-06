#include<iostream>
using namespace std;
int main()
{
	int a[100],b,c;
	cin>>b;
	int ans=0;
	for(c=0;c<b;c++)
	{
		cin>>a[c];
		ans=ans^a[c];
	}
	cout<<ans;
}