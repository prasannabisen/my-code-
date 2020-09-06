#include<iostream>
#include<cstring>
using namespace std;
int strToInt(char a[], int l)
{
	if (l == 0)
	{
		return 0;
	}
	int digit = a[l - 1] - '0';
	int small_ans = strToInt(a, l - 1);
	return small_ans * 10 + digit;
}
int main()
{
	char a[] = "1234";
	int l = strlen(a);
	int x = strToInt(a, l);
	cout << x + 5;
}