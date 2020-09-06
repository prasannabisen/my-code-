#include<iostream>
using namespace std;
void bracket(char output[], int n, int index, int open, int close)
{
	if (index == 2 * n)
	{
		output[index] = '\0';
		cout << output << endl;
		return;
	}

	if (open < n)
	{
		output[index] = '(';
		bracket(output, n, index + 1, open + 1, close);
	}
	if (close < open)
	{
		output[index] = ')';
		bracket(output, n, index + 1, open, close + 1);
	}
	return;
}
int main()
{
	int n;
	cin >> n;
	char output[1000];
	int index;
	bracket(output, n, 0, 0, 0);
}