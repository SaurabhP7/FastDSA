#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


void bitrep3(){
	ll count=0 ;
	int n=3 ;
	int k=2 ;
	for(int b=0; b<(1<<n);b++) {
		if(__builtin_popcount(b)==k){
			
			count++ ;
		}
	}
	cout<<count ;

	cout<<"\n" ;

 	bitset<20> s ;
	s[1]=1 ;
	s[4]=1 ;

	cout<<s[4]<<"\n" ;
	cout<<s[5] ;

}

	
void solve(){
	int x ;
	cin>>x ;
	bitrep3() ;

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