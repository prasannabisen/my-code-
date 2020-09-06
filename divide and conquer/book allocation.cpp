#include<iostream>
#include<climits>
using namespace std;
bool ispossble(int book[], int n, int m, int current_min)
{
	int studentused = 1;
	int page_reading = 0;
	for (int i = 0; i < n; i++)
	{
		if (page_reading + book[i] > current_min)
		{
			studentused++;
			page_reading = book[i];
			if (studentused > m)
			{
				return false;
			}
		}
		else
		{
			page_reading += book[i];
		}
	}
	return true;
}
int findpages(int book[], int n, int m)
{
	int sum = 0;
	if (n < m)
	{
		return -1;
	}
	//count the no of pages
	for (int i = 0; i < n; i++)
	{
		sum += book[i];
	}
	int s = book[n - 1];
	int	e = sum;
	int ans = INT_MAX;
	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (ispossble(book, n, m, mid))
		{
			ans = min(ans, mid);
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	return ans;
}
int main()
{
	int n = 4;
	int m = 2;
	int book[] = {10, 20, 30, 40};
	cout << findpages(book, n, m);
}