#include<iostream>
using namespace std;

void genrate_string(char *in, char *out, int i, int j)
{
	if (in[i] == '\0')
	{
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	//for zero
	//one digit
	int digit = in[i] - '0';
	char ch = digit + 'A' - 1;
	out[j] = ch;
	if (in[i] != '0')
	{
		genrate_string(in, out, i + 1, j + 1);
	}
	//second digit

	if (in[i + 1] != '\0')
	{
		int secondDigit = in[i + 1] - '0';
		int no = digit * 10 + secondDigit;
		if (no <= 26)
		{
			ch = no + 'A' - 1;
			out[j] = ch;
			genrate_string(in, out, i + 2, j + 1);
		}
	}
	return ;
}
int main()
{
	char a[100];
	cin >> a;
	char out[100];
	genrate_string(a, out, 0, 0);
}