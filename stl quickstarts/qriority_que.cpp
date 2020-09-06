#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>> p;

	for(int i=0;i<=5;i++)
	{
		int no;
		cin>>no;
		p.push(no);  //O(log N)
	}

	while(!p.empty())
	{
		cout<<p.top()<<" ";
		p.pop();
	}

}
