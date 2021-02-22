#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

vector<int> minimumSlidingWindow(vector<int> &nums,int k){

	deque<int> d ;
	vector<int> ans ;

	for(int i=0;i<nums.size();i++){

		if(!d.empty() && d.front()==i-k)
			d.pop_front() ;

		while(!d.empty() && nums[d.back()]<nums[i])
			d.pop_back() ;

		d.push_back(i) ;

		if(i>=k-1)
			ans.push_back(nums[d.front()]) ;

	}

	return ans ; 

}


void solve(){

	int n,k ;
	cin>>n>>k ;

	vector<int> nums(n) ;

	for(int i=0;i<n;i++){
		cin>>nums[i] ;
	}
	
	vector<int> ans=minimumSlidingWindow(nums,k) ;

	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" " ;

	}

	cout<<"\n" ;

}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif
	
	int y ;

	y=1 ;
	//cin>>y ;

	while(y--)
	{	
		solve() ;
	}

}