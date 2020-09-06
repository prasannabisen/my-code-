#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string s1,string s2)
{
	if(s1.length()==s2.length())
	{
		return s1<s2;
	}
	return( s1.length()>s2.length());
}
int main()
{
	int m;
	cin.get();
	cin>>m;
	string s[100];
	for(int i=0;i<m;i++)
	{
		cin>>s[i];
	}
	sort(s,s+m,compare);
	for(int i=0;i<m;i++)
	{
		cout<<s[i]<<endl;
	}
}