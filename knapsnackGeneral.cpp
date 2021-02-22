#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define mod 1000000007 

void solve(){

	int n ;
	cin>>n ;

	int w[n] ;

	int sum=0;

	w[0]=0 ;

	for(int i=1;i<=n;i++){
		cin>>w[i] ;
		sum+=w[i] ;
	}

	int m=sum ;

	bool possible[n+1][m+1] ;

	for(int k=0;k<=n;k++){
		for(int x=0;x<=m;x++){
			possible[k][x]=false ;
		}
	}	

	possible[0][0]=true ; 

	for(int k=1;k<=n;k++){
		for(int x=0;x<=m;x++){
			if(x-w[k]>=0){
				possible[k][x] |=possible[k-1][x-w[k]] ;
			 }
			 possible[k][x] |=possible[k-1][x] ;
		}

	}	


	for(int k=0;k<=n;k++){
		for(int x=0;x<=m;x++){
			cout<<possible[k][x]<<" " ;
		}
		cout<<"\n" ;
	}

	int ans=0 ;

	for(int i=0;i<=m;i++){

		if(possible[n][i]==true)
			ans++ ;
	}

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