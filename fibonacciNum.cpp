#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int Calcfib(int n,int *memo){

	if(memo[n]!=-1)
		return memo[n] ;

	memo[n]=Calcfib(n-2,memo)+Calcfib(n-1,memo) ;

	return memo[n] ;

}



int fib(int n){

	int i ;
	int memo[n+1] ;

	for(i=0;i<=n;i++){
		memo[i]=-1 ;
	}

	memo[0]=0 ;
	memo[1]=1 ;

	return Calcfib(n,memo) ;

}




void solve(){

	int n ;
	cin>>n;

	int ans=fib(n) ;
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