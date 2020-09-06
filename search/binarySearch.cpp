#include<iostream>
using namespace std;
int main()
{
#ifndef JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[100], n, search;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> search;
	int s, m, l;
	l = n;
	m = n / 2;
	s = 0;
	while (a[m] != search)
	{
		if (a[m] > search)
		{
			l = m;
			m = (s + l) / 2;
		}
		if (a[m] < search)
		{
			s = m;
			m = (s + l) / 2;
		}
	}
	cout << m;
}