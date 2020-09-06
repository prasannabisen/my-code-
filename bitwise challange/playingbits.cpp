#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int s,e,t=0;
		cin>>s;
		cin>>e;
		for(;s<=e;s++)
		{
			t+=__builtin_popcount(s);
		}
		cout<<t<<endl;
	}
}