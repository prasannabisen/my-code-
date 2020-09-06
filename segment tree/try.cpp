#include<iostream>
using namespace std;
void merge(int a[], int s, int e)
{
	int mid = (s + e) / 2;
	int l = s;
	int r = mid + 1;
	int k = s;
	int temp[100];
	while (l <= mid and r <= e)
	{
		if (a[l] > a[r])
		{
			temp[k++] = a[r++];
		}
		else
		{
			temp[k++] = a[l++];
		}
	}
	while (l <= mid)
	{
		temp[k++] = a[l++];
	}
	while (r <= e)
	{
		temp[k++] = a[r++];
	}
	for (int i = 0; i <= e; i++)
	{
		a[i] = temp[i];
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
	int a[] = {1, 5, 3, 2, 6, 9, 8, 7, 2, 4};
	int n = sizeof(a) / sizeof(a[0]);
	split(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}