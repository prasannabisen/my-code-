#include<iostream>
using namespace std;
int binary(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	int k = binary(n - 1) + binary(n - 2);
	return k;
}
int main()
{
	int i;
	cin >> i;
	while (i--)
	{
		int n;
		cin >> n;
		cout << binary(n) << endl;
	}
}