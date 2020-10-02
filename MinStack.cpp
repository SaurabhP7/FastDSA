#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

void push_element(stack<pair<int,int>> &st,int new_element){

	int new_min=st.empty()?new_element:min(new_element,st.top().second) ;
	st.push({new_element,new_min}) ;
}

void printstack(stack<pair<int,int>> st){

	cout<<st.top().first<<" "<<st.top().second<<"\n" ;

}

int min_stack(stack<pair<int,int>> st){

	int minimum=st.top().second ;
	return minimum ;

}

//Added the pop_element functionality in minstack program
int pop_element(stack<pair<int,int>> &st){
	int removed_element=st.top().first ;
	st.pop() ;
	return removed_element ;
}


void solve(){


	stack<pair<int,int>> st ;

	push_element(st,10) ;

	printstack(st) ; 

	push_element(st,20) ;
	push_element(st,5) ;

	push_element(st,30) ;

	printstack(st) ; 

	int ans1=min_stack(st) ;
	cout<<ans1<<"\n" ;
	
	//tested on a random testcase
	int ans2=pop_element(st) ;	
	cout<<ans2<<"\n" ;

	int ans3=min_stack(st) ;
	cout<<ans3<<"\n" ;

	printstack(st) ;
}


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	

	ll y ;


	y=1 ;
	//cin>>y ;

	while(y--)
	{		
		solve() ;

	}

}
