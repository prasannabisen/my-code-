#include<iostream>
using namespace std;
int binarySea(int a[], int l, int r, int search)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (a[mid] == search)
		{
			return mid;
		}
		if (a[mid] > search)
		{
			binarySea(a, l, mid - 1, search);
		}
		binarySea(a, mid + 1, r, search);
	}
	return -1;
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(a) / sizeof(a[0]);
	int search = 2;
	int l = 0, r = size;
	cout << binarySea(a, l, r - 1, search);
}