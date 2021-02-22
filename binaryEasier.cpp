#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){

	int n ;
	cin>>n ;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i] ;
	} 
	
	int target ;
	cin>>target ;

	int k=0; 

	for(int b=n/2;b>=1;b/=2){

		while(k+b<n && arr[k+b]<=target){
			k=k+b ;
		}

	}

	if(arr[k]==target){
		cout<<"Element found in "<<k ;
	}
	else{
		cout<<"element not found" ;
	}
	
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
