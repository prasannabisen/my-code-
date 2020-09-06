//vector dynamic array
//aurtomaticaly depending on array

#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> a;  //decleration 
	vector<int>b(5,10); //have 5 int value with 10 as element
	vector<int>c(b.begin(),b.end());
	vector<int>d{1,2,34,5,6};

	//iterate a vector
	for(int i=0;i<c.size();i++)
	{
		cout<<c[i]<<"\n";
	}

	for(auto it=d.begin();it!=d.end();it++)
	{
		cout<<*it<<"\n";
	}
	cout<<"\n";

	//for each loop
	for(int x:d)
	{
		cout<<x<<",";
	}
	cout<< "\n";
}