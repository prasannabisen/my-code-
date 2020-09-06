#include<iostream>
#include<cstring>
using namespace std;
void filterchar(int n,char a[])
{
	int j=0;
	while(n>0)
	{
		int last_bit=(n&1);
		if(last_bit)
		{
			cout<<a[j];
		}
		j++;
		n=n>>1;
	}
}

void print(char a[])
{
	int n=strlen(a);
	for(int i=0;i<(1<<n);i++)
	{
		filterchar(i,a);
		cout<<endl;
	}
}
int main()
{
	char a[100];
	cin>>a;
	print(a);
}


