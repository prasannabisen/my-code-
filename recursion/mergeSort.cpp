#include<iostream>
using namespace std;
void merge(int a[], int s, int e)
{
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int k = s;
	int temp[100];
	while (i <= mid && j <= e)
	{
		if (a[i] < a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
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

	for (int i = s; i <= e; i++)
	{
		a[i] = temp[i];
	}
}
void mergeSort(int a[], int s, int e)
{
	if (s >= e)
	{
		return ;
	}
	// follow 3 step

	//1st step (Divide)
	int mid = (s + e) / 2;

	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, e);

	//merge part
	merge(a, s, e);
}
int main()
{
	int a[] = {4, 5, 3, 2, 9, 7, 8, 1};
	int n = sizeof(a) / sizeof(a[0]);
	mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}