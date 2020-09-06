#include<bits/stdc++.h>
using namespace std;
int mex(unordered_set<int>set)
{
	int mex = 0;
	while (set.find(mex) != set.end())//set.end()==Not present
	{
		mex++;
	}
	return mex;
}
int grendy(int n)
{
	if (n == 0)
	{
		return 0;
	}
	unordered_set<int>set;
	for (int i = 0; i < n; i++)
	{
		set.insert(grendy(n - i));
	}
	return mex(set);
}
int main()
{
	cout << grendy(5);
}