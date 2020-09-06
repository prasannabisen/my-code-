#include<iostream>
using namespace std;
void par(int n, char *out, int i = 0, int open = 0, int close = 0)
{
	if (i == (2 * n))
	{
		out[i] = '\0';
		cout << out << endl;
		return;
	}
	if (close < open)
	{
		out[i] = ')';
		par(n, out, i + 1, open, close + 1);
	}

	if (open < n)
	{
		out[i] = '(';
		par(n, out, i + 1, open + 1, close);
	}
	return;
}
int main()
{
	int n;
	cin >> n;
	char out[100];
	par(n , out);
}