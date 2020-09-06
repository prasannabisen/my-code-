#include<iostream>
using namespace std;
int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	n = n * fact(n - 1);
	return n;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << fact(n);
}