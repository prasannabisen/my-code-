//1)Identify the Base Case
//2)Assume sub problems can be solved by recursion(automatically)
//3)Using sub problems write the answer for currnt problems
#include<iostream>
using namespace std;
bool sort(int a[], int n)
{
	if (n == 0 || n == 1)
	{
		return true;
	}
	if (a[0] < a[1] && sort(a + 1, n - 1))
	{
		return true;
	}
	return false;

}
int main()
{
#ifndef JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a[100], n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << sort(a, n);
}