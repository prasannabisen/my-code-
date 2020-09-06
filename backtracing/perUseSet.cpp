#include<iostream>
#include<set>
#include<string>
using namespace std;

void per(char a[], int i, set<string> &s)
{
	if (a[i] == '\0')
	{
		string t(a);
		s.insert(t);
		return;
	}
	for (int j = i; a[j] != '\0'; j++)
	{
		swap(a[i], a[j]);
		per(a, i + 1, s);
		//backtracing to restore the original array
		swap(a[i], a[j]);
	}
}
int main()
{
	char a[100];
	set<string> s;
	cin >> a;
	per(a, 0, s);
	for (auto str : s)
	{
		cout << str << endl;
	}
	return 0;
}