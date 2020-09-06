#include<iostream>
#include<queue>
using namespace std;

class Person
{
public:
	string name;
	int age;

	Person()
	{

	}
	Person(string s,int n)
	{
		name=s;
		age=n;
	}
};

class PersonCompare
{
public:
	bool operator()(Person A,Person B)
	{
		return A.age<B.age;
	}
};
int main()
{
	Person p1;
	int n;
	cin>>n;
	priority_queue<Person,vector<Person>,PersonCompare>pq;
	for(int i=0;i<n;i++)
	{
		string name;
		int age;
		cin>>name>>age;
		Person p(name,age);
		pq.push(p);
	}
	for(int i=0;i<3;i++)
	{
		Person p=pq.top();
		cout<<p.name<<" "<<p.age<<endl;
		pq.pop();
	}
}