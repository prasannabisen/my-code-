#include<iostream>
using namespace std;
// int firstocc(int a[], int n, int key)
// {
// 	if (n == 0)
// 	{
// 		return -1;
// 	}
// 	if (a[0] == key)
// 	{
// 		return 0;
// 	}
// 	int i = firstocc(a + 1, n - 1, key);
// 	if (i == -1)
// 	{
// 		return -1;
// 	}
// 	return i + 1;
// }
int linearSearch(int a[], int i, int n, int key)
{
	if (i == n)
	{
		return -1;
	}
	if (a[i] == key)
	{
		return i;
	}
	return linearSearch(a, i + 1, n, key)
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 4, 7};
	int n = sizeof(a) / sizeof(a[0]);
	int key = 7;
	cout << firstocc(a, n, key);
}