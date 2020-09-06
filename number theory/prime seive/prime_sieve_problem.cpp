#include<iostream>
using namespace std;
void prim_sieve(int *a)
{
	for (int i = 3; i <= 1000; i += 2)
	{
		a[i] = 1;
	}
	for (int i = 3; i < 1000; i++)
	{
		if (a[i] == 1)
		{
			for (long long int j = i * i; j < 1000; j = j + i)
			{
				a[j] = 0;
			}
		}
	}
	a[2] = a[3] = 1;
}
int main()
{
	int t;
	cin >> t;
	int a[1000] = {0};
	prim_sieve(a);
	int cumm[1000] = {0};
	for (int i = 1; i < 1000; i++)
	{
		cumm[i] = cumm[i - 1] + a[i];
	}
	while (t--)
	{
		int c, b;
		cin >> c >> b;
		cout << cumm[b] - cumm[c - 1] << endl;
	}
}