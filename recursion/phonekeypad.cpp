#include<iostream>
using namespace std;

char keypad[][10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void genrate(char *in, char *out, int i, int j)
{
	if (in[i] == '\0')
	{
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	int digit = in[i] - '0';

	if (digit == 1 || digit == 0)
	{genrate(in, out, i + 1, j);}
	for (int k = 0; keypad[digit][k] != '\0'; k++)
	{
		out[j] = keypad[digit][k];

		genrate(in, out, i + 1, j + 1);
	}
	return;
}

int main()
{
	char in[100];
	cin >> in;

	char out[100];
	genrate(in, out, 0, 0);
	return 0;
}