#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

ll compute_hash(string const &s)
{	
	const int p=31 ;
	const int m=1e9+9 ;
	ll hash_value=0 ;
	ll pow_value=1 ;
	for(char c:s){
		hash_value=hash_value+(c-'a'+1)*pow_value%m ;
		pow_value=p*pow_value ;
	}
	return hash_value ;

}


void solve(){

	string s ;
	cin>>s ;
	ll val=compute_hash(s) ;
	cout<<val;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;
	y=1;
	//cin>>y ;

	while (y--)
	{	 
		solve() ;
	}
}