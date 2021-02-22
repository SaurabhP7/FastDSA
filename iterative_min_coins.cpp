#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int coins[3]={1,3,4} ;

int value[11] ;

int min_coins(int n){

	value[0]=0 ;

	for(int x=1;x<=n;x++){

		value[x]=1e9 ;
		for(auto c: coins){
			value[x]=min(value[x],value[x-c]+1) ;
		}
	}

	return value[n] ;
	

}

void solve(){

	int sum ;
	cin>>sum ;

	int ans=min_coins(sum) ; 
	cout<<ans<<"\n" ;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	
	ll y ;

	y=1 ;
	//cin>>y ;
	
	while(y--)
	{		
		solve() ;
	}

}