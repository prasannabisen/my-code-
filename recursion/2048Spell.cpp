#include<iostream>
using namespace std;
int spell(int n)
{
	if (n == 0)
	{
		return 0;
	}
	spell(n / 10);
	int l = n % 10;
	if (l == 0)
	{
		cout << "zero";
	}
	if (l == 1)
	{
		cout << "one";
	}
	if (l == 2)
	{
		cout << "two";
	}
	if (l == 3)
	{
		cout << "three";
	}
	if (l == 4)
	{
		cout << "four";
	}
	if (l == 5)
	{
		cout << "five";
	}
	if (l == 6)
	{
		cout << "six";
	}
	if (l == 7)
	{
		cout << "seven";
	}
	if (l == 8)
	{
		cout << "eight";
	}
	if (l == 9)
	{
		cout << "nine";
	}
	return l;
}
int main()
{
	int n;
	cin >> n;
	spell(n);
}