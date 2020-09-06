#include<bits/stdc++.h>
using namespace std;

//by recursion
int minmum1(int n) {
	if (n == 1) {
		return 0;
	}
	if (n % 2 == 0) {
		return min(minmum1(n / 2), minmum1(n - 1)) + 1;
	}
	if (n % 3 == 0) {
		return min(minmum1(n / 3), minmum1(n - 1)) + 1;
	}
	return minmum1(n - 1) + 1;
}

//top down
int dpmin(int n, int dp[]) {
	if (n == 1) {
		return 0;
	}
	if (dp[n] != 0) {
		return dp[n];
	}
	if (n % 2 == 0) {
		return dp[n] = min(dpmin(n / 2, dp), dpmin(n - 1, dp)) + 1;
	}
	if (n % 3 == 0) {
		return dp[n] = min(dpmin(n / 3, dp), dpmin(n - 1, dp)) + 1;
	}
	return dp[n] = dpmin(n - 1, dp) + 1;
}

//bottom up
int bottom(int n) {
	int dp[1000];
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		if (i % 2 == 0) {
			dp[i] = min(dp[i / 2], dp[i - 1]) + 1;
			continue;
		}
		if (i % 3 == 0) {
			dp[i] = min(dp[i / 3], dp[i - 1]) + 1;
			continue;
		}
		dp[i] = dp[i - 1] + 1;
	}
	return dp[n];
}

int main() {
	int n, dp[10000] = {0};
	cin >> n;
	cout << minmum1(n) << endl;
	cout << dpmin(n, dp) << endl;
	cout << bottom(n);
}