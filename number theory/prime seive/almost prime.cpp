#include<bits/stdc++.h>
using namespace std;
void seive(int *n)
{
	n[2] = n[3] = 1;
	for (int i = 2; i < 1000; i++)
	{
		if (n[i])
		{
			for (int j = i + i ; j < 1000; j = j + i)
			{
				n[j] += 1;
			}
		}
	}
}
int main()
{
	int n[1000] = {0};
	// seive(n);
	for (int i = 0; i < 100; i++)
	{
		cout << i << "=" << n[i] << endl;
		// if (n[i] == 2)
		// {
		// 	cout << i << " ";
		// }
	}
}