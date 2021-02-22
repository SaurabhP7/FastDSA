#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std ;
typedef long long ll ;
const int mod=1000000007 ;

void solve(){	
	ll a1,a2 ;
	double b ;
	cin>>a1>>b ;
	a2=a1 ;

	//ll ib=b*100 ;
	ll iib=b*100+0.5 ;
 	//cout<<ib<<" "<<iib<<"\n" ;

	//a1*=ib ;
	a2*=iib ;

	//cout<<a1<<" "<<a2<<"\n"  ;

	//a1=a1/100 ;
	a2/=100 ;

	//cout<<a1<<" "<<a2<<"\n"  ;

	cout<<a2 ;

	/* 
	6500826032929845
	6507473094313209	
	*/
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