#include<iostream>
using namespace std;

int price(int wine[], int i, int j, int year, int mas = 0, int mass = 0) {
	if (i > j) {
		return 0;
	}
	mas = wine[i] * year + price(wine, i + 1, j, year + 1, mas, mass);
	mass = wine[j] * year + price(wine, i, j - 1, year + 1, mas, mass);
	return max(mas, mass);
}

// int dpprice(int wine[], int i, int j, int year, int rs, int rss, int dp[]) {
// 	if (i > j) {
// 		return 0;
// 	}
// 	rs = wine[i] * year + dpprice(wine, i++, j, year++, rs, rss, dp);
// 	rss = wine[y] * year, dpprice(wine, i, j++, year++, rs, rss, dp);
// 	return dp[]
// }

int main() {
	int wine[] = {2, 3, 5};
	int i = 0;
	int j = sizeof(wine) / sizeof(wine[0]);
	cout << price(wine, i, j - 1, 1);
}