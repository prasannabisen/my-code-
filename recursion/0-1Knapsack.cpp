#include<iostream>
using namespace std;

int profit(int N, int C, int *wt, int *price)
{
	if (N == 0 || C == 0)
	{
		return 0;
	}
	int ans = 0, inc, exc;
	inc = exc = 0;

	if (wt[N - 1] <= C)
	{
		inc = price[N - 1] + profit(N - 1, C - wt[N - 1], wt, price);
	}
	exc = profit(N - 1, C, wt, price);
	ans = max(inc, exc);
	return ans;
}

int main()
{
	int weight[] = {1, 2, 3, 5};
	int price[] = {40, 20, 30, 100};

	int N = 4;
	int C = 7;

	cout << profit(N, C, weight, price);
}