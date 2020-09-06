#include<iostream>
#include<bitset>
#include<vector>
using namespace std;
int n = 10000000;
bitset<10000005>b;
vector<int>primes;
void seieve()
{
	b.set();
	b[0] = b[1] = 0;

	for (long long int i = 2; i <= n; i++)
	{
		if (b[i])
		{
			primes.push_back(i);
			for (long long int j = i * i; j <= n; j = j + i)
			{
				b[j] = 0;
			}
		}
	}
}

bool isprime(long long int No)
{
	if (No <= n)
	{
		return b[No] == 1 ? true : false;
	}
	for (long long int i = 0; primes[i]*primes[i] <= No; i++)
	{
		if (No % primes[i] == 0)
		{
			return false;
		}
	}
	return true;

}

int main()
{
	seieve();
	if (isprime(214748364))
	{
		cout << "it is prime";
	}
	else
	{
		cout << "not prime";
	}
}