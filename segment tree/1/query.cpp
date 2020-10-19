//complete overlap 
//partial overlap
#include<bits/stdc++.h>
using namespace std;
void buildtree(int *a,int *tree,int s,int e,int index){
	if(s==e){
		tree[index]=a[s];
		return;
	}
	int mid=(s+e)/2;
	buildtree(a,tree,s,mid,index*2);
	buildtree(a,tree,mid+1,e,2*index+1);
	tree[index]=min(tree[index*2],tree[2*index+1]);
	return;
}
int query(int *tree,int ss,int se,int qs,int qe,int index){
	//complete overlap
	if(ss>=qs and se<=qe){
		return tree[index];
	}
	//no over lap
	if(qe<ss or qs>se){
		return INT_MAX;
	}
	//partial over lap
	int mid=(se+ss)/2;
	int left=query(tree,ss,mid,qs,qe,index*2);
	int right=query(tree,mid+1,se,qs,qe,(2*index)+1);
	return min(left,right);
}
int main(){
	int a[]={1,3,2,-5,6,4};
	int l=sizeof(a)/sizeof(a[0]);
	int *tree=new int[4*l+1];
	buildtree(a,tree,0,l-1,1);
	for(int i=0;i<13;i++){
		cout<<tree[i]<<" ";
	}
	cout<<endl;
	int n,r;
	cin>>n>>r;
	cout<<query(tree,0,l-1,n,r,1)<<endl;
}