#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void solve(){

	int n ;
	cin>>n ;
	int a[n] ;
	for(int i=0;i<n;i++){
		cin>>a[i] ;
	}

	if(n==1){
		cout<<-1 ;
		return ;
	}
	
	stack<int> st ;

	st.push(0) ;
	
	int ans[n] ;
	
	for(int next=1;next<n;next++){

		if(!st.empty()){
			int x=st.top() ;
			st.pop() ;
		
			if(a[next]<a[x])
			{
				ans[x]=a[next] ;

				while(!st.empty() && a[next]<a[st.top()])	
				{	
					ans[st.top()]=a[next] ;
					st.pop() ;
				}
			
			}
			else{
				st.push(x) ;
			}
		
			

		st.push(next) ;

		}
		

	}

	while(!st.empty()){
		ans[st.top()]=-1 ;
		st.pop() ;	
	}

	for(int i=0;i<n;i++){
		cout<<ans[i]<<" " ;
	}



}	


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	
	ll y ;

	y=1;
	//cin>>y ;

	while(y--){

		solve() ;

	}

}