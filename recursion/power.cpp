#include<iostream>
using namespace std;
int pow(int n, int a)
{
	if (a == 1)
	{
		return n;
	}
	n = n * pow(n, a - 1);
	return n;
}
int main()
{
	int n, a;
	cin >> n >> a;
	cout << pow(n, a);
}