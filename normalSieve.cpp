#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


void solve(){


	int l,r ;
	cin>>l>>r ;
	vector<char> is_prime(n+1,true) ;

	is_prime[0]=is_prime[1]=false ;

	for(int i=2;i*i<=r;i++){

		if(is_prime[i]){

			for(int j=i*i;j<=n;j=j+i){
				is_prime[j]=false ;
			}
		}

	}


	for(int i=0;i<=n;i++){

		if(is_prime[i]==true){
			cout<<i<<"\n" ; 
		}
	}

}


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;
	//y=1 ;

	cin>>y ;
	while (y--)
	{	 
		solve() ;
	
	}
}