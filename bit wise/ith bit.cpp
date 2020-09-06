#include<iostream>
using namespace std;
int getbit(int n,int k)
{
	int b=1<<k;
	cout<<b<<endl;
	int i=n&b;
	cout<<i<<endl;
	return(n&b);
}
 int main()
 {
 	int n;
 	int k;
 	cin>>n;
 	cin>>k;
 	if(getbit(n,k)>0)
 	{
 		cout<<"bit is 1"<<endl;
 	}
 	else
 	{
 		cout<<"bit is 0"<<endl;
 	}
 }