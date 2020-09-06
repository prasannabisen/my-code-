#include<iostream>
using namespace std;
//complexicity:-n(log(log(n)))
void prime_sieve(int *p)
{
	//first mark all odd no as true
	for (long i = 3; i <= 1000; i += 2)
	{
		p[i] = 1;
	}
	//sieve
	for (long long i = 3; i < 1000; i += 2)
	{
		if (p[i] == 1)
		{
			for (long long j = i * i; j <= 1000; j = j + i)
			{
				p[j] = 0;
			}
		}
	}
	//special case;
	p[2] = 1;
	p[1] = p[0] = 0;
}

int main()
{
	int p[1000] = {0};
	int n;
	cin >> n;
	prime_sieve(p);
	for (int i = 0; i < n; i++)
	{
		if (p[i] == 1)
		{
			cout << i << " ";
		}
	}
}