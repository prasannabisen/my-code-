//cycle property

#include <iostream>
using namespace std;
int main(){
	int a,b,q;
	cin>>a>>b;
	int temp[40000]={0};
	for(int i=0;i<a*b;i++){
		if(((i%a)%b)!=((i%b)%a)){
			temp[i]=1;
		}
	}
	int l,r,ans=0;
	cin>>l>>r;
	for(int i=(l%(a*b));i<=(r%(a*b));i++){
		if(temp[i]==1){
			ans++;
		}
	}
	cout<<ans<<endl;
}
