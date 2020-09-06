#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int>l;
	for(int i=0;i<=5;i++)
	{
		l.push(i);
	}

	while(!l.empty())
	{
		cout<<l.front();
		l.pop();
		
	}
}