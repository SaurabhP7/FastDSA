#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void bubblesort(int a[],int n){

	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]) ;
			}
		}


	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" " ;
	}


}


void solve(){
int n=8 ;
int a[8] ;
for (int i = 0; i < 8; i++)
{
	cin>>a[i] ;
}

bubblesort(a,n) ;


}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;

	//cin >> y ; 
	y=1;

	while (y--)
	{	 
		solve() ;
	}
}