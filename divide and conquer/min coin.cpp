#include<bits/stdc++.h>
using namespace std;

int coin(int n,int a[],dp[]){
	if(n<=0){
		return 0;
	}
	if(dp[n]!=0){
		return dp[n];
	}
	int mini=INT_MAX;
	for(int i=0;i<10;i++){
		if(n-a[i]>=0){
			mini=min(mini,coin(n-a[i],a))+1;
		}
	}
	return dp[n]=mini;
}

int main(){
	int n;
	cin>>n;
	int dp[10000]={0};
	arr[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	cout<<coin(n,a,dp);
}