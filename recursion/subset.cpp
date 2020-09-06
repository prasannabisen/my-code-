#include<iostream>
#include<cstring>
using namespace std;
void subset(string s, int index = 0, string x = "")
{
	int l = s.length();
	if (index == l)
	{
		cout << x << endl;
		return;
	}
	subset(s, index + 1, x + s[index]);
	subset(s, index + 1, x);
}
int main()
{
	string s = "abe";
	subset(s);
}