#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){

	int n,k ;
	cin>>n>>k; 

	int a[n] ;
		
	for(int i=0;i<n;i++){
		cin>>a[i] ;
	}

	int l=0 ;
	int r=0 ;

	unordered_map<int,int> count ;

	vector<int> v ;
	int ans=1e9 ;


	while(l<n){

		while(r<n && v.size()<=k)
		{
			v.push_back(a[r]) ;
			count[a[r]]++ ;
			r++ ;
		}

		if(v.size()>=k){
			ans=min(ans,r-l) ;
			if(count[a[l]]==1 &&count[a[l+1]]==1 &&count[a[l+2]]==1)
				cout<<a[l]<<a[l+1]<<a[l+2]<<"\n" ;
		}

		if(count[a[l]]==1){
			v.erase(remove(v.begin(),v.end(),a[l]),v.end()) ;
		}

		count[a[l]]-- ;

		l++ ;

	}


	if(ans==1e9){
		cout<<-1 ;
	}
	else{
		cout<<ans ; 
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