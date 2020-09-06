#include<iostream>
using namespace std;
float sqrt(int n, int p)
{
	int s = 0;
	int l = n;
	float ans = -1;
	float mid;
	while (s <= l)
	{
		mid = (s + l) / 2;
		if (mid * mid == n)
		{
			return mid;
		}
		if (mid * mid < n)
		{
			ans = mid;
			s = mid + 1;
		}
		if (mid * mid > n)
		{
			ans = mid - 1;
			l = mid - 1;
		}
	}

	//for floating part
	//use bruteforce
	float inc = 0.1;
	for (int time = 0; time < p; time++)
	{
		while (ans * ans <= n)
		{
			ans = ans + inc;
		}
		//over shout part
		ans = ans - inc;
		inc = inc / 10;
	}
	return ans;
}
int main()
{
	int n;
	cin >> n;
	cout << sqrt(n, 3);
	return 0;
}