//top down(recursion + memoization)
#include<iostream>
using namespace std;
int fab(int n, int dp[]) {
	if (n == 0 or n == 1) {
		return n;
	}
	if (dp[n] != 0) {
		return dp[n];
	}
	int ans;
	ans = fab(n - 1, dp) + fab(n - 2, dp);
	return dp[n] = ans;
}
int main()
{
	int n;
	cin >> n;
	int dp[10000] = {0};
	cout << fab(n, dp);
}