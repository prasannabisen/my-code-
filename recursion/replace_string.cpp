#include<iostream>
#include<cstring>
using namespace std;
void repl(char a[], int i)
{
	if (a[i] == '\0' or a[i + 1] == '\0')
	{
		return;
	}
	if (a[i] == 'p' and a[i + 1] == 'i')
	{
		//shifting followed with 3.14
		int j = i + 2;
		// take j to end of the array
		while (a[j] != '\0')
		{
			j++;
		}
		//shifting right to left
		while (j >= i + 2)
		{
			a[j + 2] = a[j];
			j--;
		}
		//replacment+
		a[i] = '3';
		a[i + 1] = '.';
		a[i + 2] = '1';
		a[i + 3] = '4';
		repl(a, i + 4);
	}
	else
	{
		//goto next function
		repl(a, i + 1);
	}
}
int main()
{
	char a[100] = "xpighpimpipi";
	repl(a, 0);
	for (int i = 0; i < strlen(a); i++)
	{
		cout << a[i];
	}
}