#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define sz(x) int(x.size())
using namespace std ;
typedef long long ll ;
const int mod=1000000007;

void solve(){

	string s,t ;
	cin>>s>>t ;

	int n=sz(s),m=sz(t) ;

	vector<vector<int>> is(26) ;

	rep(i,n){
		is[s[i]-'a'].push_back(i) ;

	} 

	rep(i,n){
		is[s[i]-'a'].push_back(i+n) ;
	}

	int p=0 ;
	ll ans=0 ;

	rep(i,m){

		char c=t[i]-'a' ;

		if(sz(is[c])==0){
			puts("-1") ;
			return ;
		}

		p=*lower_bound(is[c].begin(),is[c].end(),p)+1 ;

		if(p>=n){
			p-=n ;
			ans+=n ;
		}

	}

	ans+=p ;
	cout<<ans ;

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