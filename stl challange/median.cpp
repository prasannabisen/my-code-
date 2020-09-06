#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int i,n;
	vector<int>a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int c;
		cin>>c;
		a.push_back(c);
	}
	for(i=0;i<n;i++)
	{
		int c;
		cin>>c;
		a.push_back(c);
	}
	n=a.size();
	sort(a.begin(),a.end());
	int m=a.size();
	cout<<a[(m/2)-1];
}