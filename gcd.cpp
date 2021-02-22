#include<bits/stdc++.h>
using namespace std ;
/*
void solve(){



	
} */

int gcd(int a,int b){

	while(b){

		int r=a%b ;
		a=b ;
		b=r ;
	}
	return a ;
}





int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

int a,b ;
cin>>a>>b ;

int ans=gcd(a,b) ;
cout<<ans ;







	/*
	int y ;
	cin >> y ;
	while (y--)
	{
		solve() ;
	}
*/
}