#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){
	
		int n,k ;

		cin>>n>>k ;

		int a[n] ;

		for(int i=0;i<n;i++){
			cin>>a[i] ;
		}
			
		int curr_Sum=0 ;
		int max_Sum=INT_MIN ;

		for(int i=0;i<n;i++){

			curr_Sum=curr_Sum+a[i] ;

			if(i>=k-1){

				max_Sum=max(curr_Sum,max_Sum) ;
				curr_Sum=curr_Sum-a[i-(k-1)] ;

			}

			//cout<<curr_Sum<<" "<<max_Sum<<"\n" ;
		}

		cout<<max_Sum ;
	
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	ll y ;

	y=1 ;
	//cin>>y ;

	while(y--){

		solve() ;

	}

}