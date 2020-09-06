#include<iostream>
using namespace std;
int main()
{	
	int n,cnt[64]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{		
		int no,j=0;
		cin>>no;
		while(no>0)
		{
			int last_bit=(no&1);
			cnt[j]+=last_bit;
			no=(no>>1);
			j++;
		}
	}
	int ans=0,p=1;
	for(int i=0;i<64;i++)
	{
		cnt[i]%=3;
		ans+=(cnt[i]*p);
		p=p<<1;
	}
	cout<<ans;
}