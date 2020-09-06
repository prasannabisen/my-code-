#include<iostream>
#include<algorithm>

using namespace std;
bool compare(string s1,string s2)
{
	cout<<s1<<" "<<s2<<endl;
	if(s1[0]==s2[0])
	{
		return s1.length()>s2.length();
	}
	return s1<s2;
}
int main()
{
	int a;
	string s[1000];
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>s[i];
	}
	sort(s,s+a,compare);
	for(int i=0;i<a;i++)
	{
		cout<<s[i]<<endl;
	}
}