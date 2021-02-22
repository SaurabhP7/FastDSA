#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

ll compute_hash(string const &s)
{	
	const int p=31 ;
	const int m=1e9+9 ;
	ll hash_value=0 ;
	ll pow_value=1 ;
	for(char c:s){
		hash_value=hash_value+(c-'a'+1)*pow_value%m ;
		pow_value=p*pow_value ;
	}
	return hash_value ;

}

vector<vector<int>> group_identical_strings(vector<string> const &s){

	int n=s.size() ;
	vector<pair<ll,int>> hashes(n)  ;

	for(int i=0;i<n;i++){
		hashes[i]={compute_hash(s[i]),i} ;
	}

	sort(hashes.begin(),hashes.end()) ;

	vector<vector<int>> groups ;

	for(int i=0;i<n;i++){
		if(i==0||hashes[i].first!=hashes[i-1].first){
			groups.emplace_back() ;
		}

		groups.back().push_back(hashes[i].second) ;

	}

	return groups ;

}


void solve(){

	int n ;
	cin>>n ;

	vector<string> c ;


	for(int i=0;i<n;i++){
		string s ;
		cin>>s ;
		c.push_back(s) ;
	}

	vector<vector<int>> ans=group_identical_strings(c) ;

	for(int i=0;i<ans.size();i++){
		cout<<"group "<<i<<" " ;

		for(auto p:ans[i]){
			cout<<p<<" " ;
		}
		cout<<"\n" ;
	}

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;
	y=1;
	//cin>>y ;

	while (y--)
	{	 
		solve() ;
	}
}