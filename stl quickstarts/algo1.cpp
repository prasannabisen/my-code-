#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[100]={1,2,5,3,4,6,9,8};
	int size=sizeof(a)/sizeof(int);
	auto loc=find(a,a+size,5);
	cout<<loc-a;
	//cout<<loc;   //this will give address of key
}