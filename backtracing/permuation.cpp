#include<iostream>
using namespace std;

void per(char a[], int i)
{
	if (a[i] == '\0')
	{
		cout << a << " ";
		return;
	}
	for (int j = i; a[j] != '\0'; j++)
	{
		swap(a[i], a[j]);
		per(a, i + 1);
		//backtracing to restore the original array
		swap(a[i], a[j]);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char a[100];
		cin >> a;
		per(a, 0);
		cout << endl;
	}
	return 0;
}