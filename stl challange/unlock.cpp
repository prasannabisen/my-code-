#include<iostream>
using namespace std;
 int main()
 {
 	int n,a[100],k,t=0;
 	cin>>n;
 	cin>>k;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
 	for(int i=0;i<n&&t<k;i++)
 	{
 		int j,max,in;
 		j=i;
 		max=a[i];
 		for(;j<n;j++)
 		{
 			if(a[j]>max)
 			{
 				max=a[j];
 				in=j;
 			}
 		}
 		int s;
 		if(a[i]!=max)
 		{
 			cout<<"wnter"<<endl;
 			s=a[i];
 			a[i]=max;
 			a[in]=s;
 			t++;
 		}
 	}
 	for(int i=0;i<n;i++)
 	{
 		cout<<a[i]<<" ";
 	}
 }