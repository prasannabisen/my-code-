//use case of binary search
//firtst occerence
//last occerence

#include<iostream>
using namespace std;
int firstOcc(int *a, int s, int l, int mid, int key)
{
	int ans = -1;
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
			ans = mid;
			l = mid - 1;
		}
	}
	return ans;
}

int lastOcc(int *a, int s, int l, int mid, int key)
{
	int ans = -1;
	while (s <= l)
	{
		mid = (s + l) / 2;
		if (key == a[mid])
		{
			ans = mid;
			s = mid + 1;
		}
		if (key < a[mid])
		{
			l = mid - 1;
		}
		if (key > a[mid])
		{
			s = mid + 1;
		}
	}
	return ans;
}
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 7, 8, 9, 10};
	int l = sizeof(a) / sizeof(a[0]);
	int s = 0;
	int mid = (s + l) / 2;
	int key;
	cin >> key;
	cout << firstOcc(a, s, l, mid, key) << endl;
	cout << lastOcc(a, s, l, mid, key);
}