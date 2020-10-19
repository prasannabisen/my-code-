//lazy propgration
#include<iostream>
using namespace std;
void buildtree(int *a,int *tree,int s,int l,int index){
	if(s==l){
		tree[index]=a[s];
		return;
	}
	int mid=(s+l)/2;
	buildtree(a,tree,s,mid,2*index);
	buildtree(a,tree,mid+1,l,2*index+1);
	tree[index]=min(tree[index*2],tree[2*index+1]);
	return;
}
int main(){
	int a[]={1,3,2,-5,6,4};
	int l=sizeof(a)/sizeof(a[0]);
	int *tree=new int [4*n+1];
	buildtree(a,tree,0,l-1,1);
}