#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

ll binpow(int a,int b){

	if(b==0)
		return 1 ;

	ll res=binpow(a,b/2) ;

	if(b%2){
		return res*res*a ;
	}
	else{
		return res*res ;

	}


}


void solve(){

	int a,b ;
	cin>>a>>b ;

	ll ans=binpow(a,b) ;
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

	while(y--){

		solve() ;
	}

}