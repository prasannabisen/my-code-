#include<iostream>
using namespace std;
int find(int *a, int n, int key)
{
	int s = 0;
	int l = n - 1;
	while (s <= l)
	{
		int mid = (s + l) / 2;
		if (a[mid] == key)
		{
			return mid;
		}
		if (a[s] <= a[mid])
		{
			//2 case =>element lies on the left on the right of the mid
			if (key >= a[s] and key <= a[mid])
			{
				l = mid - 1;
			}
			else
			{
				s = mid + 1;
			}
		}
		else
		{
			if (key >= a[mid] and key <= a[l])
			{
				s = mid + 1;
			}
			else
			{
				l = mid - 1;
			}
		}
	}
	return -1;
}
int main()
{
	int a[10000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int s = 0;
	int key;
	cin >> key;
	cout << find(a, n, key);
}