#include<bits/stdc++.h>
using namespace std ;
typedef vector<int> lnum ;
const int base=1000*1000*1000 ;


lnum inputNum(string s1){

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

	return a ;

}

void outputNum(lnum a){

	//OUTPUT THE LARGE NUMBER
	printf("%d",a.empty()?0:a.back()) ;

	for(int i=(int)a.size()-2;i>=0;--i)
	{
		printf("%09d",a[i]) ;
	}

}

//ADD 2 LARGE NUMBERS
lnum addition(lnum a,lnum b){

	int carry=0 ;

	for(size_t i=0;i<max(a.size(),b.size())||carry;++i)
	{
		if(i==a.size()){
			a.push_back(0) ;
		}

	a[i]+=carry+(i<b.size()?b[i]:0) ;
	carry=a[i]>=base ;
	if(carry){
		a[i]-=base ;
	}

	}

	return a ;
}

//SUBSTRACT 2 LARGE NUMBERS
lnum substract(lnum a,lnum b){

	int carry=0 ;
	for(size_t i=0;i<a.size()||carry;++i){

		a[i]-=carry+(i<b.size()?b[i]:0) ;

		carry=a[i]<0 ;
		if(carry){
			a[i]+=base ;
		}
	}
	
	while(a.size()>1 && a.back()==0){
		a.pop_back() ;
	}

	return a ;
}

//MULTIPLY BY  SMALL NUMBER
lnum multiply(lnum a,int b) {

	int carry=0 ;

	for(size_t i=0;i<a.size()||carry;++i){

		if(i==a.size()){
			a.push_back(0) ;
		}

		long long cur=carry+a[i]*1ll*b ;

		a[i]=(int)(cur%base) ;
		carry=(int)(cur/base) ;
	}

	while(a.size()>1 && a.back()==0)
		a.pop_back() ;

	return a ;
}

//MULTIPLY 2 BIG NUMBERS
lnum multiply(lnum a,lnum b){

	lnum c(a.size()+b.size()) ;

	for(size_t i=0;i<a.size();++i){
		for(int j=0,carry=0;j<(int)b.size()||carry;++j){

			long long curr=c[i+j]+a[i]*1ll*(j<(int)b.size()?b[j]:0)+carry ;
			c[i+j]=int(curr%base) ;
			carry=int(curr/base) ;

		}
	}
	
	while(c.size()>1 && c.back()==0)
		 c.pop_back() ;

	return c ;

}

//DIVIDE A BY SMALL NUMBER
lnum divide(lnum a,int b){

	int carry=0 ;

	for(int i=a.size()-1;i>=0;i--){

		long long curr=a[i]+carry*1ll*base ;
		a[i]=int(curr/b) ;
		carry=int(curr%b) ;

	}

	while(a.size()>1 && a.back()==0)
		a.pop_back() ;

	return a ;
}


void solve(){

	string s1,s2;
	cin>>s1 ;
	cin>>s2 ;

	lnum a=inputNum(s1) ;
	lnum b=inputNum(s2) ;

	lnum ans=addition(a,b) ;
	outputNum(ans) ;

	lnum ans1=substract(a,b) ;
	outputNum(ans1) ;

	int c=13459 ;
	lnum ans2=multiply(a,c) ;	
	outputNum(ans2) ;

	lnum ans3=multiply(a,b) ;
	outputNum(ans3) ;

	int d=4 ;
	lnum ans4=divide(a,d) ;
	outputNum(ans4) ;

}	


int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int y ;

	y=1 ;
	//cin>>y ; 

	while(y--){

		solve() ;
	}

	return 0 ;
}