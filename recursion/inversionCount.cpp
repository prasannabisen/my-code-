#include<iostream>
using namespace std;

int merge(int a[], int s, int e)
{
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[100];
	int count = 0;

	while (i <= mid && j <= e)
	{
		if (a[i] < a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
			count += mid - i + 1;
		}
	}
	while (i <= mid)
	{
		temp[k++] = a[i++];
	}
	while (j <= e)
	{
		temp[k++] = a[j++];
	}
	for (int t = 0; t <= e; t++)
	{
		a[t] = temp[t];
	}
	return count;
}
int inversionCount(int a[], int s, int e)
{
	if (s >= e)
	{
		return 0;
	}
	int mid = (s + e) / 2;
	int x = inversionCount(a, s, mid);
	int y = inversionCount(a, mid + 1, e);
	int z = merge(a, s, e);
	return x + y + z;
}
int main()
{
	int a[] = {1, 5, 2, 6, 3, 0};
	int n = sizeof(a) / sizeof(a[0]);
	cout << inversionCount(a, 0, n - 1);
}