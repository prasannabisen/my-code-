#include<bits/stdc++.h>
using namespace std;
void buildtree(int *a,int *tree,int s,int e,int index){
	if(s==e){
		tree[index]=a[s];
		return;
	}
	int mid=(s+e)/2;
	buildtree(a,tree,s,mid,2*index);
	buildtree(a,tree,mid+1,e,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;
}

void update(int *tree,int s,int e,int i,int inc,int index){
	//i is out of bound
	if(i<s or i>e){
		return;
	}
	//leaf node
	if(s==e){
		tree[index]=tree[index]+inc;
		return;
	}
	//
	int mid=(s+e)/2;
	update(tree,s,mid,i,inc,2*index);
	update(tree,mid+1,e,i,inc,2*index+1);
	tree[index]=min(tree[2*index],tree[2*index+1]);
	return;
}

int main(){
	int a[]={1,3,2,-5,6,4};
	int l=sizeof(a)/sizeof(a[0]);
	int *tree=new int[4*l+1];
	buildtree(a,tree,0,l-1,1);
	for(int i=1;i<13;i++){
		cout<<tree[i]<<" ";
	}
	cout<<endl;

	update(tree,0,l-1,3,10,1);

	for(int i=1;i<13;i++){
		cout<<tree[i]<<" ";
	}
}