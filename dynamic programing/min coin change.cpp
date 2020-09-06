#include<bits/stdc++.h>
using namespace std;
int coin(int n, int NoCoin[]) {
	if (n < 0) {
		return 0;
	}
	if (n == 0) {
		return 0;
	}
	int mini = INT_MAX;
	for (int i = 0; i < 3; i++) {
		if (n - NoCoin[i] >= 0) {
			mini = min(mini, coin(n - NoCoin[i], NoCoin)) + 1;
		}
	}
	return mini;
}

int dp(int n, int NoCoin[], int dpa[]) {
	if (n <= 0) {
		return 0;
	}
	if (dpa[n] != 0) {
		return dpa[n];
	}
	int mini = INT_MAX;
	for (int i = 0; i < 3; i++) {
		if (n - NoCoin[i] >= 0) {
			int mini = min(mini, dp(n - NoCoin[i], NoCoin, dpa)) + 1;
		}
	}
	return dpa[n] = mini;
}

int dpsol(int n, int NoCoin[], int dp[]) {
	if (n <= 0) {
		return 0;
	}
	if (dp[n] != 0) {
		return dp[n];
	}
	int mini = INT_MAX;
	for (int i = 0; i < 3; i++) {
		if (n - NoCoin[i] >= 0) {
			mini = min(mini, dpsol(n - NoCoin[i], NoCoin, dp)) + 1;
		}
	}
	return dp[n] = mini;
}

int dpsol2(int n, int NoCoin[]) {
	int dp[100000];
	dp[1] = dp[7] = dp[10] = 1;
	dp[0] = 0;
	for (int i = 2 ; i <= n; i++) {

	}
}

int main() {
	int n;
	cin >> n;
	int NoCoin[] = {1, 7, 10}, k;
	// cin >> k;
	// for (int i = 0; i < k; i++) {
	// 	cin >> NoCoin[i];
	// }
	int dp[10000] = {0};
	cout << dpsol(n, NoCoin, dp);
	cout << dpsol2(n, NoCoin);
}