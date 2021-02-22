#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;


void merge(int *a,int start,int mid,int end){

	int temp[end-start+1] ;

	int i=start ;
	int j=mid+1 ;
	int k=0 ;

	while(i<=mid&&j<=end){

		if(a[i]>=a[j]){
			temp[k]=a[j] ;
			j++ ;
			k++ ;
		}
		else{
			temp[k]=a[i] ;
			i++ ;
			k++ ;
		}

	}

	while(i<=mid){
			temp[k]=a[i] ;
			i++ ;
			k++ ;
	}

	while(j<=end){
			temp[k]=a[j] ;
			j++ ;
			k++ ;
		}

for(int i=start;i<=end;i++){
	a[i]=temp[i-start];
}


}

void mergesort(int *a,int start,int end){

if(start<end)
	{
	int mid=(start+end)/2 ;
	mergesort(a,start,mid) ;
	mergesort(a,mid+1,end) ;
	merge(a,start,mid,end) ;
	}

}
	


void solve(){
int n=8 ;
int a[8] ;
for (int i = 0; i < 8; i++)
{
	cin>>a[i] ;
}

mergesort(a,0,n-1) ;

for (int i = 0; i < 8; i++)
{
	cout<<a[i]<<" " ;
}


}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin) ;
	freopen("output.txt", "w", stdout) ;
#endif

	int y ;

	//cin >> y ; 
	y=1;

	while (y--)
	{	 
		solve() ;
	}
}