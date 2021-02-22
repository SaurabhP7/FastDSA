#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ;

int col[30]={0} ;
int diag1[30]={0} ;
int diag2[30]={0} ;

void nqueen(int n,int y,int &count){			//pass by reference to maintain count


	if(n==y){
		count++ ;
		return ;
	}else{

		for(int x=0;x<n;x++){

			if(col[x]||diag1[x+y]||diag2[x-y+n-1])
				continue ;

			col[x]=diag1[x+y]=diag2[x-y+n-1]=1 ;
			
			nqueen(n,y+1,count) ;
			
			col[x]=diag1[x+y]=diag2[x-y+n-1]=0 ;

		}

	}

}


void solve(){

vector<int> v ;
int n;
cin>>n ;
int y=0 ; 
int count=0 ;

nqueen(n,y,count);
cout<<count;
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