#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	int n1, n2, a[100], p = 0, i;
	cin >> n1 >> n2;
	for ( i = n1; i < n2; i++)
	{
		int flag = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			a[p++] = i;
		}
	}
	cout << endl;
	for (i = 0; i < p ; i++)
	{
		cout << a[i] << " ";
	}
}