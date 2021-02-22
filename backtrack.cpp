#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0 ; i < (n); ++i)
using namespace std ;
typedef long long ll ;
const int mod=1000000007;

vector<string> a ;

void recur(string s,int open,int close,int max){


	if((int)s.length()==max*2){
		a.push_back(s) ;
		return ;
	}

	if(open<max){
		recur(s+'{',open+1,close,max) ;
	}

	if(close<open){
		recur(s+'}',open,close+1,max) ;
	}

}


void parenthesis(string s,int n){

	recur("",0,0,n/2) ;

} 

void solve(){
	
	string s ;
	cin>>s ;

	int n=s.length() ;

	if(n%2!=0){
		cout<<"NOT POSSIBLE" ;
	}

	parenthesis(s,n) ;

	for(auto x:a){
		cout<<x<<"\n" ;
	}

	
}



int main(){
 
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin) ;
		freopen("output.txt","w",stdout) ;
    #endif 

		cin.tie(0);
		cout.tie(0);
		ios_base::sync_with_stdio(false);  


		int y ;

		y=1 ;
		//cin>>y ;

		while(y--){
 
			solve() ;

		}

}