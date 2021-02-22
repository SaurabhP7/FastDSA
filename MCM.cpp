#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){


	int n=5 ;

	int p[5]={5,4,6,2,7} ;

	int dp[n][n] ;
	
	memset(dp,0,sizeof(dp)) ;

	int min ;	

	for(int d=1;d<n-1;d++){
		for(int i=1;i<n-d;i++){

			int j=i+d ;

			min=10000 ;

			for(int k=i;k<=j-1;k++){

				int q=dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j] ;

				if(q<min){
					min=q ;
				
				}
			
			}

			dp[i][j]=min ;

		}

	}

	/*
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" " ;
		}
		cout<<"\n" ;
	}
	*/

	cout<<"The answer is "<<dp[1][n-1] ;

	
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif


	ll y ;
	
	y=1 ;
	
	while(y--){
		solve() ;
	}

	
}