#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int queen(int n){

	if(n==2)
		return 0 ;
	else{
		int a=queen(n-1);
		int ans=a+(2*(n-1)*(n-1)*(n-2)) ;
		return ans ;
	}



}

void solve(){
int n;
cin>>n ;
int ans=queen(n) ;
cout<<ans ;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	cin.tie(0);

	int y ;
	//cin >> y ; 
	y=1;
	while (y--)
	{	 
		solve() ;
	}
}