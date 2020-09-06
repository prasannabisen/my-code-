#include<iostream>
#include<algorithm>
using namespace std;
bool cowsCanPlace(int stalls[], int n, int c, int min_sep)
{
	int last_cow = stalls[0];
	int count = 1;
	for (int i = 1; i < n; i++)
	{
		if (stalls[i] - last_cow >= min_sep) {
			last_cow = stalls[i];
			count++;
			if (count == c)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	//sorted array
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, cow;
		int stalls[100000];
		cin >> n >> cow;
		for (int k = 0; k < n; k++)
		{
			cin >> stalls[k];
		}
		sort(stalls, stalls + n);
		int s = 0;
		int e = stalls[n - 1] - stalls[0];
		int ans = 0;
		while (s <= e)
		{
			int mid = (s + e) / 2;
			bool cowsPlace = cowsCanPlace(stalls, n, cow, mid);
			if (cowsPlace) {
				ans = mid;
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
		cout << ans << endl;
	}
}