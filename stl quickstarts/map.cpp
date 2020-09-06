//map is a associtive container
//key-value map
//insert((key,value))
//map is bst
//key is order

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string,int>m;

	//insert value in map
	//1st
	m.insert(make_pair("mango",100));
	//2nd
	pair<string,int>p;
	p.first="apple";
	p.second=120;

	m.insert(p);

	//3rd
	m["mango"]=20;
	
	//serach

	string friut;
	cin>>friut;
	auto it=m.find(friut);
	if(it!=m.end())
	{
		cout<<"price of"<<friut<<" is:="<<m[friut]<<endl;
	}
	else
	{
		cout<<"friut is not present";
	}

	//erase a fruit
	//m.erase(friut);

	//update the price
	
	m["litchi"]=50;
	m["pineapple"]=100;
	//another way to find a particular key
	/*if(m.count(friut))
	{
		cout<<"price of "<<friut<<" is"<<m[friut];
	}
	else
	{
		cout<<"friut is not present";
	}*/

	for(auto k=m.begin();k!=m.end();k++)
	{
		cout<<k->first<<"and"<<k->second<<endl;
	}

	for(auto p:m)
	{
		cout<<"\n"<<p.first<<"  "<<p.second<<endl;
	}

}