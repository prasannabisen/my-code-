//Ax+By=GCD(A,B)
//finding the value of x and y
//application
//|->1)Multipl
//|->2)linear Diophantive eq

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a[100000], f1 = 0, f2 = 0, miss, common;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++) {
			if (i + 1 != a[i] and f1 != 1) {
				miss = i + 1;
				f1 = 1;
			}
			if (a[i] == a[i + 1] and f2 != 1) {
				common = a[i];
				f2 = 1;
			}
		}
		cout << common << " " <<< miss << endl;
	}
	return 0;
}