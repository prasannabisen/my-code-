#include<iostream>
#include<list>
using namespace std;

class graph{
	int v;
	list<int> *l;
public:
	graph(int v){
		this->v=v;
		l=new list<int>[v];
	}
	void add(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void print(){
		for(int i=0;i<v;i++){
			cout<<i<<"->";
			for(auto n:l[i]){
				cout<<n<<",";
			}
			cout<<endl;
		}
	}
};

int main(){
	graph g(5);
	g.add(0,1);
	g.add(1,2);
	g.add(0,2);
	g.add(2,3);
	g.print();
}