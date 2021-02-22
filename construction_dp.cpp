#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int coins[3]={1,3,4} ;

int value[11] ;
int first[11] ;

int min_coins(int n){

	int f=n ;

	value[0]=0 ;

	for(int x=1;x<=n;x++){

		value[x]=1e9 ;

		for(auto c:coins){

			if(x-c>=0 && value[x-c]+1<value[x])
			{
				value[x]=value[x-c]+1 ;
				first[x]=c ;
			}

		}

	}
	
	while(n>0){

		cout<<first[n]<<" " ;
		n=n-first[n] ;

	}

	cout<<"\n" ;

	return value[f] ;

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