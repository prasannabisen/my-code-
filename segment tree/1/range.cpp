#include<bits/stdc++.h>
using namespace std;
void buildtree(int *a,int *tree,int s,int e,int index){
	if(s==e){
		tree[index]=a[s];
		return ;
	}
	int mid=(s+e)/2;
	buildtree(a,tree,s,mid,2*index);
	buildtree(a,tree,mid+1,e,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;
}
void range(int *tree,int sr,int er,int s,int e,int inc,int index){
	if(sr>e or er<s){
		return;
	}
	//
	if(s==e){
		tree[index]+=inc;
		return;
	}
	int mid=(s+e)/2;
	range(tree,sr,er,s,mid,inc,2*index);
	range(tree,sr,er,mid+1,e,inc,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
}
int main(){
	int a[]={1, 3, 2, -5, 6, 4};
	int l=sizeof(a)/sizeof(a[0]);
	int *tree=new int[4*l+1];
	buildtree(a,tree,0,l-1,1);
	for(int i=0;i<13;i++){
		cout<<tree[i]<<" ";
	}
	cout<<endl;
	range(tree,3,5,0,l-1,10,1);
	for(int i=0;i<13;i++){
		cout<<tree[i]<<" ";
	}
}