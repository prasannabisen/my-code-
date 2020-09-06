#include<iostream>
using namespace std;

int fab(int n, int dp[]) {
	dp[1] = 1;
	for (int i = 2; i < 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int space(int n) {
	if (n == 0 or n == 1) {
		return n;
	}
	int a = 0, b = 1, c;
	for (int i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main() {
	int n;
	cin >> n;
	int dp[100] = {0};
	cout << fab(n, dp) << endl;
	cout << space(n) << endl;
}