#include<iostream>
using namespace std;
int countbit(int a)
{
	int total=0;
	while(a!=0)
	{
		total+=a&1;
		a=a>>1;
	}
	return total;
}

int countbitfast(int n) //fast method
{
	int ans=0;
	while(n>0)
	{
		n=n&(n-1);
		ans++; 
	}
	return ans;
}
int main()
{
	int a;
	cin>>a;
	cout<<countbit(a)<<endl;
	cout<<countbitfast(a)<<endl;
	cout<<__builtin_popcount(a);  //built in function
}