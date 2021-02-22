#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){

	string s1 ;
	string s2 ;

	cin>>s1>>s2 ;

	int m=s1.length() ;
	int n=s2.length() ;

	int dp[m+1][n+1] ;

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0||j==0)
				dp[i][j]=0 ;
			else
			{
				if(s1[i]==s2[j])
					dp[i][j]=dp[i-1][j-1]+1 ;
				else
					dp[i][j]=0 ;
			}
		}
	} 

	int mx=-1 ;

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			mx=max(mx,dp[i][j]) ;
		}	
	}

	cout<<mx ;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	
	int y ;

	y=1 ;
	//cin>>y ;
	
	while(y--)
	{	
		solve() ;
	}

}