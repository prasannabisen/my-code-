#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=1;i<=(a/2)+1;i++){
		cout<<(i^a)<<endl;
	}
	return 0;
}