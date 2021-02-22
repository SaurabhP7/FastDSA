#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


int minCoins(int *a,int n,int s){
	int min[s+1] ;
	for(int i=0;i<=s;i++){
		min[i]=INT_MAX ;
	}
	min[0]=0 ;

	for(int i=1;i<=s;i++){

		for(int j=0;j<n;j++)

		if(a[j]<=i&& min[i-a[j]]+1<min[i]){
			min[i]=min[i-a[j]]+1 ;
		}


	}
	return min[s] ;

}



void solve(){


	int a[3]={1,3,5} ;
	int s=11 ;

	int ans=minCoins(a,3,s) ;
	cout<<ans ;
}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;
	y=1 ;

	//cin>>y ;
	while (y--)
	{	 
		solve() ;
	
	}
}