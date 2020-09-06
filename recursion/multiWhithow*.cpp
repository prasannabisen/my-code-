#include<iostream>
using namespace std;
int multi(int a, int n)
{
	if (n == 1)
	{
		return a;
	}
	a = a + multi(a, n - 1);
	return a;
}
int main()
{
	int a, n;
	cin >> a >> n;
	cout << multi(a, n);
}