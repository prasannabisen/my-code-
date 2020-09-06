#include<iostream>
#include<bitset>
#include<vector>
using namespace std;
int n = 10000000;
bitset<10000000>b;
vector<int>prime;
void seieve()
{
	b.set();
	b[0] = b[1] = 0;
	for (long long int i = 0; i < n; i++)
	{
		if (b[i])
		{
			prime.push_back(i);
			for (long long int j = i * i; j < n; j = j + i)
			{
				b[j] = 0;
			}
		}
	}
}
int main()
{
	seieve();
	for (int i = 0; i < 100; i++)
	{
		cout << prime[i] << " ";
	}
}