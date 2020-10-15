#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0 ; i < (n); ++i)
using namespace std ;
typedef long long ll ;
const int mod=1000000007;

void solve(){

	//LIS

	int n ; 
	cin>>n ;

	vector<int> v(n) ;

	rep(i,n){
		cin>>v[i] ;
	} 

	vector<int> dp(n) ;

	for(int i=0;i<n;i++){
		dp[i]=1 ;
		for(int k=0;k<i;k++){
			if(v[k]<v[i])
				dp[i]=max(dp[k]+1,dp[i]) ;
		}
	}

	int mx=0 ;

	rep(i,n){
		//cout<<dp[i]<<" " ;
		mx=max(mx,dp[i]) ;
	}
		
	cout<<mx ;


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

}