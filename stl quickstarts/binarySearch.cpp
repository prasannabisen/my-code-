#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,6,6,6,70,80,90,100};
	int n=sizeof(a)/sizeof(int);
	int key;
	cin>>key;
	bool present=binary_search(a,a+n,key);    //use when array is in sorted form
	if(present)
	{
		cout<<"present";
	}
	else
	{
		cout<<"not present";
	}

	auto add=lower_bound(a,a+n,key);	//>=
	cout<<"\n"<<add-a<<"\n";

	auto add1=upper_bound(a,a+n,key);	//>
	cout<<add1-a<<"\n";

	//total no of occurance
	cout<<"\n"<<add-a<<"\n";
	cout<<"no of occ"<<add1-add<<"\n";
}