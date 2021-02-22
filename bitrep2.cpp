#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


void bitrep2(){

	int x=0 ;

	x|= (1<<1) ;     //intersection of (1<<1) and x 
	x|= (1<<3) ;
	x|= (1<<4) ;
	x|= (1<<8) ;
	cout<<__builtin_popcount(x)<<"\n" ;

	for(int i=0;i<=31;i++){
		if(x&(1<<i))
			cout<<i<<" " ;
	}
cout<<"\n" ;
int y=(1<<1)|(1<<3)|(1<<4)|(1<<8) ;
int z=(1<<3)|(1<<6)|(1<<8)|(1<<9) ;

int q=y|z ;
cout<<__builtin_popcount(q) ;

}
	
void solve(){
	int x ;
	cin>>x ;
	bitrep2() ;

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