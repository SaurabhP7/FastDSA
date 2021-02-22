#include<bits/stdc++.h>
using namespace std ;
/*
void solve(){



	
} */


void cnk(int n){

	vector<vector<int>> v(n+1) ;
	

	for(int i=0;i<=n;i++){

		v[i].resize(i+1) ;
		v[i][0]=(1)  ;
   		v[i][i]=(1) ;

		for(int j=1;j<i;j++){
			v[i][j]=v[i-1][j-1] + v[i-1][j] ;
			
		}

		

	}


	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=i;j++){
			cout<<v[i][j]<<"" ;
		}
		cout<<"\n" ;

	}



}
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif



int n;
cin>>n ;
cnk(n) ;




	/*
	int y ;
	cin >> y ;
	while (y--)
	{
		solve() ;
	}
*/
}