#include<iostream>
using namespace std;
int update(int n,int i)
{
	int mask=~(1<<i);
	int cleared=n&mask;
	n=cleared|(v<<i);
}
int main()
{
	int n,i;
	cin>>n;
	cin>>i; 
	cout<<update(n,i);
}