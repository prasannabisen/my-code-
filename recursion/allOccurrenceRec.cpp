#include<iostream>
using namespace std;

int storeOcc(int a[], int n, int key, int output[], int j, int i)
{
	if (i == n)
	{
		return j;
	}
	if (a[i] == key)
	{
		output[j] = i;
		return storeOcc(a, n, key, output, j + 1, i + 1);
	}
	return storeOcc(a, n, key, output, j, i + 1);
}

void allOcc(int a[], int n, int key, int i = 0)
{
	if (i == n)
	{
		return ;
	}
	if (a[i] == key)
	{
		cout << i << " ";
	}
	allOcc(a, n, key, i + 1);
}
int main()
{
	int a[] = {1, 2, 2, 3, 4, 2, 5, 6, 7, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int key = 2;
	int output[100];
	//allOcc(a, n, key);
	int cnt = storeOcc(a, n, key, output, 0, 0);
	cout << cnt;
	for (int k = 0; k < cnt; k++)
	{
		cout << output[k] << " ";
	}
}