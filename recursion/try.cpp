#include<iostream>
using namespace std;
void sub(string s, int index = 0, string a = "")
{
	int l = s.length();
	if (index == l)
	{
		cout << a << endl;
		return;
	}
	sub(s, index + 1, a + s[index]);
	sub(s, index + 1, a);
}
int main()
{
	string s = "abc";
	sub(s);
}