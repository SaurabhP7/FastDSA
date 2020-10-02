#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

bool p(int *a,int x,int target){

	if(a[x]>=target)
		return true ;
	else
		return false ;

}


int discrete_binary_search(int *a,int n,int target){

	int lo=1 ;
	int hi=n-1 ;
	//condition mistake has been corrected
	while(lo<hi){

		int mid=lo+(hi-lo)/2 ; // int overflow problem solved

		if(p(a,mid,target)==true){
			hi=mid ;		//debugged
		}
		else{
			lo=mid+1 ;
		}

	}

	if(p(a,lo,target)==false){

		return -1;
	}

	return lo ;

}




void solve(){

	int n ;
	cin>>n ;

	int a[n+1] ;

	a[0]=0 ;

	for(int i=1;i<=n;i++){
		cin>>a[i] ;
	}

	int idx=discrete_binary_search(a,n,55) ;
	if(idx==-1){
		cout<<"Not Found" ;
	}
	else
	{
		cout<<idx ;
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

	while(y--){

		solve() ;

	}

}
