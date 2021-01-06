#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,sum=0;
	cin>>n;
	ll val[n];
	for(ll i=0;i<n;i++){
		cin>>val[i];
	}
	sort(val,val+n);
	for(ll i=0;i<n;i++){
		val[i]=val[i]*(n-i);
	}
	ll max=val[0];
	for(ll i=1;i<n;i++){
		if(val[i]>max)
			max=val[i];
	}
	cout<<max<<endl;
	
}
