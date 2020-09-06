#include<iostream>
using namespace std;
//incomplete
// bool parathaMake(int r[], int s, int e, int mid, int n, int p)
// {
// 	int noParatha = 0;
// 	for (int i = 0; i < n; i++ )
// 	{
// 		int time = mid;
// 		int multi = 1;
// 		while (time - (r[i]*multi) > 0)
// 		{
// 			noParatha += 1;
// 			multi++;
// 			time -= r[i] * multi;
// 		}
// 	}
// 	if (noParatha >= p)
// 	{
// 		return true;
// 	}
// 	return false;
// }

// int paratha(int r[], int p, int n)
// {
// 	int s = r[0];
// 	int sum = 0;
// 	for (int i = 1; i <= p; i++)
// 	{
// 		sum += r[0] * i;
// 	}
// 	int e = sum;
// 	int ans = 0;
// 	while (s <= e)
// 	{
// 		int mid = (s + e) / 2;
// 		if (parathaMake(r, s, e, mid, n, p))
// 		{
// 			ans = mid;
// 			e = mid - 1;
// 		}
// 		else {
// 			s = mid + 1;
// 		}
// 	}
// 	return ans;
// }
// int main()
// {
// 	int p, n, r[100];
// 	cin >> p >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> r[i];
// 	}
// 	cout << paratha(r, p, n);
// }

int main()
{
	int c, r[100];
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		cin >> r[i];
	}
	int min;
	cin >> min;
	int paratha = 0;
	for (int i = 0; i < c; i++)
	{
		int multi = 1;
		int time = min;
		while (time  > 0)
		{
			paratha += 1;
			cout << time << " ";
			time -= r[i] * multi ;
			multi += 1;
		}
		cout << endl;
	}
	cout << paratha;
}