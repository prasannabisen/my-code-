#include<iostream>
using namespace std;
int binary(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return 0;
	}
	int k = binary(n - 1) + binary(n - 2);
	return k;
}
int main()
{
	int n;
	cin >> n;
	cout << binary(n);
}