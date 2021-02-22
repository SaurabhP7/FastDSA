#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0 ; i < (n); ++i)
using namespace std ;
typedef long long ll ;
const int mod=1000000007;
const int N=1e5 ;

void ch_min(int &a,const int &b){
	a=min(a,b) ;
}

void solve(){

	int n,m ;
	cin>>n>>m ;

	vector<int> a(n) ;
	vector<int> b(m) ;

	rep(i,n){
		cin>>a[i] ;
	}

	rep(j,m){
		cin>>b[j] ;
	}

	vector<vector<int>> dp(n+1,vector<int> (m+1,mod)) ; 

	dp[0][0]=0 ;

	rep(i,n+1)rep(j,m+1){

		if(i<n) ch_min(dp[i+1][j],dp[i][j]+1) ;
		if(j<m) ch_min(dp[i][j+1],dp[i][j]+1) ;

		if(i<n && j<m)
		{
			int c=0 ;
			if(a[i]!=b[j]) c=1 ;
			ch_min(dp[i+1][j+1],dp[i][j]+c) ;
		}
	
	}

	cout<<dp[n][m] ;




}

int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin) ;
		freopen("output.txt","w",stdout) ;
    #endif 

		cin.tie(0);
		cout.tie(0);
		ios_base::sync_with_stdio(false);  

		int y ;

		y=1 ;
		//cin>>y ;

		while(y--){
 
			solve() ;
			
		}

		return 0 ;
}