#include<iostream>
#include<string>
using namespace std;
int main()
{
/*	string s1;
	string s2("hello montu");

	string s3(s2);
	cout<<s3;

	char a[]={'a','b','c','d','e'};
	string s4(a);

	/*cout<<s1<<"\n";
	cout<<s2<<"\n";
	cout<<s3<<"\n";
	cout<<s4<<"\n";
	if(s1.empty())
	{
		cout<<"string is empty";
	}

	//append

	s4.append("i love c++");
	s4+=" and java too";
	cout<<"\n"<<s4<<"\n";

	//erase or clear
	cout<<s4.length()<<"\n";
	s4.clear();
	cout<<s4.length()<<"\n";

	//compare
	*/
	string s5="apple";
	string s6="mango";
	//cout<<"\n"<<s6.compare(s5)<<"\n";
	//string is lexio 

	//find sub string
	string s="i love apple";
	int ind=s.find("apple");
	cout<<ind;

	string word="apple";
	int len=word.length();
	cout<<"\n\n"<<len<<"\n";
	s.erase(ind,len);
	cout<<"\n"<<s<<"\n";

	//iterator
	for(auto p=s5.begin();p!=s5.end();p++)
	{
		cout<<*p;
	}
}