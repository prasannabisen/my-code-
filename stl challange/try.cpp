#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n,j;
	cin>>n;
	string s[100];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<s[i].compare(s[j])<<endl;
		}
	}
}