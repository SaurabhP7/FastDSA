#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int coins[3]={1,3,4} ;

int min_coins(int x){

	if(x<0)
		return 1e9 ;

	if(x==0)
		return 0 ;

	int best=1e9 ;

	for(auto c:coins){

		best=min(best,min_coins(x-c)+1) ;

	}

	return best ;

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