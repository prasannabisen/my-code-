//hcf is same as gcd(greatest common divisor)
//euclid algo for gcd
//GCD(a,b)=GCD(b,a%b)
#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	// if (b == 0)
	// {
	// 	cout << a;
	// 	return a;
	// }
	// gcd(b, a % b);
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	int hcf = gcd(a, b);
	int lcm = (a * b) / hcf;
	cout << hcf << endl << lcm;
	//gcd*lcm=a*b;
}