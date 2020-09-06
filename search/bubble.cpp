#include<iostream>
using namespace std;
int main()
{
	int a[] = {1, 4, 6, 9, 8, 7, 3, 6};
	int n = sizeof(a) / sizeof(a[0]);
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[j] > a[j + 1])
			{
				int s = a[j];
				a[j] = a[j + 1];
				a[j + 1] = s;
			}
		}
		for (int k = 0; k < n; k++)
		{
			cout << a[k] << " ";
		}
		cout << "\n";
	}
}