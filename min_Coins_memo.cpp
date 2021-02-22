#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int coins[3]={1,3,4} ;

bool ready[3] ;
int value[3] ;


int min_coins(int x){

	if(x<0)
		return 1e9 ;

	if(x==0)
		return 0 ;

	if(ready[x]){
		return value[x] ;
	}

	int best=1e9 ;
     
     for(auto c:coins){
     	best=min(best,min_coins(x-c)+1) ;
     }

     ready[x]=true ;
     value[x]=best ;

     return best ;



}



void solve(){

	memset(ready,false,sizeof(ready)) ;
	memset(value,0,sizeof(value)) ;

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