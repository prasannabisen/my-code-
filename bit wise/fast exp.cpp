#include<iostream>
using namespace std;
int pow(int a,int b)
{
	int ans=1;
	while(a>0)
	{
		int last_bit=(a&1);
		if(last_bit)
		{
			ans*=b;
		}
		b=b*b;
		a=a>>1;
	}
	return ans;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b);
}