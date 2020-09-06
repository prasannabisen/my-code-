//1)choose pivot
//2)Divid -> <pivot
//		  -> >pivot
//recusily sort
#include<iostream>
using namespace std;

int partition(int a[], int s, int e)
{
	//inplace partition
	int i = s - 1;
	int j = s;
	int pivot = a[e];
	for (; j < e - 1; j++ /*expand the region*/)
	{
		if (a[j] < pivot)
		{
			i = i + 1;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[e]); //placing pivot in it place
	return i + 1;
}
void quicksort(int *a, int s, int e)
{
	if (s >= e)
	{
		return ;
	}
	//recursive case
	int p = partition(a, s, e);
	//left
	quicksort(a, s, p - 1);
	//right
	quicksort(a, p + 1, e);
}

int main()
{
	int a[] = {2, 8, 6, 1, 5, 4};
	int n = sizeof(a) / sizeof(a[0]);
	quicksort(a, 0, n - 1);
	for (int i = 0; i <= n - 1; i++)
	{
		cout << a[i] << " ";
	}
}