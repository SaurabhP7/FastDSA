#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
typedef vector<int> lnum ;
const int base=1000*1000*1000 ;

void solve(){

	string s1 ;
	cin>>s1 ;

	lnum a ;

	//INPUT LARGE NUMBER
	for(int i=(int)s1.length();i>0;i=i-9){
		if(i<9){
			a.push_back(atoi(s1.substr(0,i).c_str())) ;
		}
		else
		{
			a.push_back(atoi(s1.substr(i-9,9).c_str())) ;
		}
	}
	
	//REMOVE LEADING ZEROES
	while(a.size()>1 && a.back()==0){
		a.pop_back() ;
	}


	//OUTPUT THE LARGE NUMBER
	printf("%d",a.empty()?0:a.back()) ;

	for(int i=(int)a.size()-2;i>=0;--i)
	{
		printf("%09d",a[i]) ;
	}



}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;

	y=1 ;
	//cin>>y ; 

	while(y--){

		solve() ;
	}

}