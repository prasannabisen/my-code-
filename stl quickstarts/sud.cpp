#include<iostream>
using namespace std;
string rec(int a[10000],int b)
{
	int i,j;
	for(i=0;i<b;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				return(string(a[i]));
			}
		}
	}
	return ("undefined");
}

int main()
{
	int a[1000],b;
	cin>>b;
	for(int i=0;i<b;i++)
	{
		cin>>a[i];
	}
	cout<<rec(a,b);
}