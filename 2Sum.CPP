#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){

	int n ;
	cin>>n ;

	int arr[n] ;
	
	for(int i=0;i<n;i++){
		cin>>arr[i] ;
	}

	int target ;
	cin>>target ;

	sort(arr,arr+n) ;

	int l=0,r=n-1 ;

	while(l<r){

		int sum=arr[l]+arr[r] ;

		if(sum>target){
			r-- ;
		}
		else if(sum<target)
			l++ ;
		else{

			cout<<arr[l]<<" "<<arr[r]<<"\n" ;
			break ;
		}

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