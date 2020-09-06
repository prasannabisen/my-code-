#include<iostream>
using namespace std;
int fab(int n)
{
	//base case
	if (n == 0 || n == 1)
	{
		return n;
	}
	//recursive case
	int f1 = fab(n - 1);
	int f2 = fab(n - 2);
	return f1 + f2;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << fab(n);
}