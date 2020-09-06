#include<iostream>
using namespace std;
void merge(int a[], int s, int e)
{
	int mid = (s + e) / 2;
	int i = s;
	int l = mid + 1;
	int k = s;
	int temp[100];
	while (i <= mid && l <= e)
	{
		if (a[i] < a[l])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[l++];
		}
	}
	while (i <= mid)
	{
		temp[k++] = a[i++];
	}
	while (l <= e)
	{
		temp[k++] = a[l++];
	}
	for (int r = 0; r <= e; r++)
	{
		a[r] = temp[r];
	}
}
void split(int a[], int s, int e)
{
	if (s >= e)
	{
		return;
	}
	int mid = (s + e) / 2;
	split(a, s, mid);
	split(a, mid + 1, e);
	merge(a, s, e);
}
int main()
{
	int a[] = {4, 5, 3, 2, 9, 7, 8, 1};
	int n = sizeof(a) / sizeof(a[0]);
	split(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}