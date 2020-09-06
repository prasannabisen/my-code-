#include<iostream>
using namespace std;
void sort(int a[], int n)
{
	if (n == 0)
	{
		return ;
	}
	for (int j = 0; j < n - 1; j++)
	{
		if (a[j] > a[j + 1])
		{
			swap(a[j], a[j + 1]);
		}
	}
	sort(a, n - 1);
}

void bubbeSort(int a[], int n, int j)
{
	if (n == 1)
	{
		return;
	}
	if (j == n - 1)
	{
		return bubbeSort(a, n - 1, 0);
	}
	if (a[j] > a[j + 1])
	{
		swap(a[j], a[j + 1]);
	}
	return bubbeSort(a, n, j + 1);
}

int main()
{
	int a[] = {5, 4, 3, 1, 2};
	int n = sizeof(a) / sizeof(a[0]);
	//sort(a, n);
	bubbeSort(a, n, 0);
	for (int k = 0; k < n; k++)
	{
		cout << a[k] << " ";
	}
}