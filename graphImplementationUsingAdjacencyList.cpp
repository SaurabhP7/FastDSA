#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void addedge(vector<vector<int>> &adj,int u,int v){

	adj[u].push_back(v) ;
	adj[v].push_back(u) ;

}

void printGraph(vector<vector<int>> &adj,int V){

	for(int v=0;v<V;v++){

		cout<<"Adjacency List vertex"<<v ;
		for(auto x:adj[v]) {


			cout<<"->"<<x<<"\n" ;
		}

	}

}

void solve(){

	int V ;
	cin>>V ;

	vector<vector<int>> adj(V) ;

	addedge(adj,0,1) ;
	addedge(adj,0,4) ;
	addedge(adj,1,2) ;
	addedge(adj,1,3) ;
	addedge(adj,1,4) ;
	addedge(adj,2,3) ;
	addedge(adj,3,4) ;

	printGraph(adj,V) ; 

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	
	int y ;

	
	y=1;
	
	while(y--)
	{
		solve() ;
	}

}