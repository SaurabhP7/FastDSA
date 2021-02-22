#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ;

void solve(){

vector<int> v ;
int n ;
cin>>n ;

for(int i=1;i<=n;i++){
	v.push_back(i) ;

}

do{

for(int i=0;i<n;i++){
	cout<<v[i]<<" " ;
	}
	cout<<"\n" ;
	}while(next_permutation(v.begin() , v.end() ) ) ;

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