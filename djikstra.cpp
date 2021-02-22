#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0 ; i < (n); ++i)
using namespace std ;
using ll=long long ;
using P=pair<ll,int> ;

const int mod=1000000007;
const int N=1e5 ;
const ll INF=1e18;

struct Edge
{	
	int to,t ;
	Edge(int to, int t):to(to),t(t){}
	
};

void solve(){

int n,m,s,d ;
cin>>n>>m>>s>>d ;

s-- ;
d-- ;

vector<vector<Edge>> g(n+1) ;

rep(i,m){

	int a,b,t,k ;
	cin>>a>>b>>t>>k ;
	a-- ;
	b-- ;
	g[a].emplace_back(b,t) ;
	g[b].emplace_back(a,t) ;

}

vector<ll> dist(n,INF) ;

priority_queue<P,vector<P>,greater<P>> q ;

auto push=[&](int v,ll x){
	if(dist[v]<=x) return ;
	dist[v]=x ;
	q.emplace(x,v) ;

};

push(s,0) ;

while(!q.empty()){

	auto x=q.top().first ;
	auto v=q.top().second ;

	q.pop() ;
	if(dist[v]!=x)	continue ;

	for(Edge &e:g[v]){
		/*
		ll nx=((x+e.k-1)/e.k)*e.k+e.t ;
		push(e.to,nx) ;
		*/
	}
}

if(dist[d]==INF)
	cout<<-1 ;
else
	cout<<dist[d] ;


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

		return 0 ;
}