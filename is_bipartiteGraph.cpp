#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void addedge(vector<vector<int>> &adj,int u,int v){

	adj[u].push_back(v) ;
	adj[v].push_back(u) ;

}

bool is_bipartite(vector<vector<int>> &adj,int n){

	queue<int> q ;
	vector<int> side(n,-1) ;
	bool is_bipartite_var=true ;


	for(int st=0;st<n;++st){
		if(side[st]==-1){

			q.push(st) ;
			side[st]=0 ;

			while(!q.empty()){

				int v=q.front() ;
				q.pop() ; 

				for(int u:adj[v]){
					if(side[u]==-1){
						side[u]=side[v]^ 1 ;
						q.push(u) ;
					}
					else{
						is_bipartite_var&=side[u]!=side[v] ;
					}
				}
			}	
		
		}
		
	}
	return is_bipartite_var ;
}



void solve(){

	int n;
	cin>>n; 

	int e ;
	cin>>e ;

	vector<vector<int>> adj(n) ;

	for(int i=0;i<e;i++){
		int l,r ;
		cin>>l>>r ;
		addedge(adj,l,r) ;

	}

	bool ans=is_bipartite(adj,n) ;
	if(ans==1){
		cout<<"The graph is bipartite" ;
	}
	else{
		cout<<"Oh no ,it is not" ;
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