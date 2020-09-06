#include<iostream>
using namespace std;
int search(int *a, int s, int mid, int l, int key)
{
	while (s <= l)
	{
		mid = (s + l) / 2;
		if (key > a[mid])
		{
			s = mid + 1;
		}
		if (key < a[mid])
		{
			l = mid - 1;
		}
		if (key == a[mid])
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int s = 0;
	int key = 90;
	int l = sizeof(a) / sizeof(a[0]);
	int mid = (s + l) / 2;
	cout << search(a, s, mid, l - 1, key);
}