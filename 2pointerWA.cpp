#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;



void solve(){

	int n,sum ;
	cin>>n>>sum ;
	int a[n] ;

	for(int i=0;i<n;i++){
		cin>>a[i] ;
	}

	int var_sum=0 ;

	for(int l=0,r=0;l<n;l++){

		cout<<var_sum<<"\n" ;

		while(var_sum+a[r]<=sum){
			var_sum=var_sum+a[r] ;
			r++ ;
		}
		//cout<<var_sum<<"\n" ;

		if(r>n+1)
			break ;

		if(var_sum==sum){
			cout<<"y"<<"\n" ;
			break ;
		}
		
		var_sum=var_sum-a[l] ;

		//do something with segment [l,r),that is ok() ;
	}
	

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
