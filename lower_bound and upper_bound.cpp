#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std ;
typedef long long ll ;
const int mod=1000000007;
const int N=1e5 ;

void solve(){

	int n;
	cin>>n ;

	vector<int> a(n) ;

	rep(i,n){
		cin>>a[i] ;
	}	

	vector<int> b(n),c(n) ;

	rep(i,n){
		b[i]=i+1+a[i] ;
		c[i]=i+1-a[i] ;
	}

	sort(b.begin(),b.end()) ;
	sort(c.begin(),c.end()) ;
	/*
	rep(i,n){
		cout<<b[i]<<" " ;
	}

	cout<<"\n" ;

	rep(i,n){
		cout<<c[i]<<" " ;
	}
	*/

	vector<int> ::iterator lo,up ;

	ll ans=0 ;

	//cout<<"\n" ;

	rep(i,n){

		lo=lower_bound(c.begin(),c.end(),b[i]) ;
		up=upper_bound(c.begin(),c.end(),b[i]) ;

		//cout<<lo-c.begin()<<" "<<up-c.begin()<<"\n" ;
	
		ans+=up-lo ;
	
	}

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