#include<iostream>
using namespace std;
int tile(int n, int m)
{
	if (n < m)
	{
		return 1;
	}
	int k = tile(n - 1, m) + tile(n - m, m);
	return k;
}
int main()
{
	int f;
	cin >> f;
	while (f--)
	{
		int n, m;
		cin >> n >> m;
		cout << tile(n, m) << endl;
	}
}