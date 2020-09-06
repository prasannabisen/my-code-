#include<iostream>
using namespace std;
int lastOcc(int a[], int n, int key)
{
	if (n == 0)
	{
		return -1;
	}
	int i = lastOcc(a + 1, n - 1, key);
	if (i == -1)
	{
		if (a[0] == key)
		{
			return 0;
		}
		else
		{
			return -1;
		}
	}
	return i + 1;
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 1, 1};
	int n = sizeof(a) / sizeof(a[0]);
	int key = 1;
	cout << lastOcc(a, n, key);
}