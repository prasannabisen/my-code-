#include<iostream>
using namespace std;
int pow(int a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return a * pow(a, n - 1);
}
int fastpow(int a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	int smaller_ans = fastpow(a, n / 2);
	smaller_ans *= smaller_ans;
	if (n & 1)
	{
		return smaller_ans * a;
	}
	return smaller_ans;
}
int main()
{
	int a, n;
	cin >> a >> n;
	cout << pow(a, n) << endl ;
	cout << fastpow(a, n);
}