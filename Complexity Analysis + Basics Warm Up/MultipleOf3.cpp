#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
	boost;
	ll t;
	cin>>t;
	while(t--){
		ll k,d0,d1,lastFourth=0,sum=0;
		cin>>k>>d0>>d1;
		ll d[7];
		d[0]=d0;
		d[1]=d1;
		for(ll i=0;i<7;i++){
			if(i==0 || i==1)
				sum+=d[i];
				
			else{
				d[i]=sum%10;
				sum+=d[i];
			}
		}
		lastFourth=d[4]+d[3]+d[5]+d[6];
		ll x=(k-7)%4;
		for(ll i=3;i<x+3;i++){
			sum+=d[i];
		}
		ll y=(k-7-x)/4;
		sum+=(lastFourth*y);
		if(sum%3==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
