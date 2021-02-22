#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int target ;
int arr[12];

bool valid(int x){

	if(arr[x]<target)
		return false ;
	else
		return true ;
}


void solve(){

	int n ;
	cin>>n ;

	for(int i=0;i<n;i++){
		cin>>arr[i] ;
	} 
	
	cin>>target ;

	int z=n ;

	int x=-1 ;

	for(int b=z;b>=1;b/=2){
		while(!valid(x+b)){
			x=x+b ;
		}
	}

	int k=x+1 ;

	cout<<"Element just greater than "<<target<<" is "<<arr[k] ;

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
