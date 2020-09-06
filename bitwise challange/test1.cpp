#include<iostream>
using namespace std;
int main()
{
	int n,no,b[64]={0},j;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		j=0;
		cin>>no;
		while(no>0)
		{
			int last_bit=(no&1);
			b[j]+=last_bit;
			j++;
			no=no>>1;
		}
	}
	int p=1,ans=0;
	for(int i=0;i<64;i++)
	{
		b[i]=b[i]%3;	
		ans+=b[i]*p;
		p=p*2;
	}

}