#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 7, 8, 9, 10};
	int key;
	cin >> key;
	int n = sizeof(a) / sizeof(a[0]);
	int present = binary_search(a, a + n, key);
	if (present)
	{
		cout << "present";
	}
	else
	{
		cout << "not present";
	}
	//for index
	auto it1 = lower_bound(a, a + n, key);
	auto it2 = upper_bound(a, a + n, key);
	cout << "lower_bound" << it1 - a << endl;
	cout << "upper_bound" << it2 - a << endl;
	cout << "frequence" << it2 - it1;
	//never do this for frequency
	// if (it1 - a == n)
	// {
	// 	cout << "not present";
	// }
}