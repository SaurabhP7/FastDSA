#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int coins[3]={1,3,4} ;

int cnt[11] ;

int count_ways(int n){

	cnt[0]=1 ;

	for(int x=1;x<=n;x++){

		for(auto c:coins){

			if(x-c>=0)
				cnt[x]+=cnt[x-c] ;

		}

	}

	return cnt[n] ;

}

void solve(){

	int sum ;
	cin>>sum ;

	int ans=count_ways(sum) ; 
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