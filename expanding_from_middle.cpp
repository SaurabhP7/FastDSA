#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
  
int length_of_palin(int l,int r,string s)
{
        int len=0 ;
        
        while(l>=0 && r<s.size()){
            
            if(s[l]==s[r]){
                len=r-l+1 ;
                l-- ;
                r++ ;
            }
            else
                break ;
              
        }
        
        return len ;
        
        
}    
    
string longestPalindrome(string s) {
        
        int start=0,end=0 ;
        if(s.length()==0)
            return "" ;
        
        for(int center=0;center<s.size();center++)
        {
            
            int len1=length_of_palin(center,center,s) ;
            int len2=length_of_palin(center,center+1,s) ;
            
            if(len1>end-start+1){
                start=center-len1/2 ;
                end=center+len1/2 ;
            }
    
            if(len2>end-start+1) 
            {
                start=center-len2/2+1 ;
                end=center+len2/2 ;
            }
        /*
        cout<<center<<"-------------"<<"\n" ;    
		cout<<len1<<" "<<len2<<"\n" ; 
		cout<<start<<" "<<end<<"\n" ;        
          */ 
            
        }        
		
        return s.substr(start,end-start+1) ;
        
}

void solve(){

	string s ;
	cin>>s ;

	string ans=longestPalindrome(s) ;
	cout<<ans ;
	
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