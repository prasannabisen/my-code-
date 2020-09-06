#include<iostream>
using namespace std;
void desc(int n)
{
	if (n == 0)
	{
		return;
	}
	cout << n << "\n";
	desc(n - 1);
	cout << n << "\n";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	desc(n);
}