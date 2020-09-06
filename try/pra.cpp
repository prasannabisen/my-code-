#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// bool gc(int i, int j) {
// 	if (__gcd(i, j) == 1) {
// 		return true;
// 	}
// 	return false;
// }

int gc(int i, int j) {
	return j == 0 ? i : gc(j, i % j);
}

int main() {
	int a, count = 0;
	vector<int>b;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			b.push_back(i);
		}
	}
	for (int i = 0; i < b.size(); i++) {
		for (int j = i ; j < b.size(); j++)
		{
			if (gc(b[i], b[j]) == 1 && i != j) {
				count++;
			}
		}
	}
	cout << count;
}