#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0 ; i < (n); ++i)
using namespace std ;
typedef long long ll ;
const int mod=1000000007;
int dist[17][17];
int dp[1 << 17][17];

void solve() {
	
	int n ;
	cin>>n ;

	vector<int> x(n),y(n),z(n) ;

	rep(i,n){
		cin>>x[i]>>y[i]>>z[i] ;
	}

	rep(i,n){
		rep(j,n){
		
			int temp=abs(x[i]-x[j]) ;
			temp+=abs(y[i]-y[j]) ;
			temp+=max(0,z[j]-z[i]) ;
			dist[i][j]=temp	;
		}
	}

	rep(i,n){
		rep(j,n){
			rep(k,n){
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]) ;
			}
		}
	}

	rep(i,1<<n){
		rep(j,n){
			dp[i][j]=mod ;
		}
	}

	dp[1][0]=0 ;

	rep(i,1<<n){
		rep(j,n){
			if(dp[i][j]==mod)
				continue ;

			rep(to,n){

				if(i & (1<<to))
					continue ;

				dp[i^(1<<to)][to]=min(dp[i^(1<<to)][to],dp[i][j]+dist[j][to]) ;

			}
		}
	}

	int mn=mod ;

	/*
	rep(i,1<<n){
		rep(j,n){
			cout<<dp[i][j]<<" " ;
		}
		cout<<"\n" ;
	}

	*/

	rep(j,n){

		if(dp[(1<<n)-1][j]+dist[j][0]<mn){
			mn=dp[(1<<n)-1][j]+dist[j][0] ;
		}
	}	

	cout<<mn ;

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

}