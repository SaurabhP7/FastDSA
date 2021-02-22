#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


void bitrep(int x){

	for(int k=31;k>=0;k--){
		if(x&(1<<k))
			cout<<1 ;
		else
			cout<<0 ;
	}

	cout<<"\n" ;
 	cout<<__builtin_clz(x)<<"\n" ;
 	cout<<__builtin_ctz(x)<<"\n" ;
 	cout<<__builtin_popcount(x)<<"\n" ;
 	cout<<__builtin_parity(x)<<"\n" ;
}

void solve(){
	int x ;
	cin>>x ;
	bitrep(x) ;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;
	//cin >> y ;
	y=1 ;
	while (y--)
	{
		solve() ;
	}
}