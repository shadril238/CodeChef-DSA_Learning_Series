#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
	boost;
	ll t;
	cin>>t;
	while(t--){
		ll g;
		cin>>g;
		while(g--){
			ll i,n,q,h,t;
			cin>>i>>n>>q;
			if(i==1){
				h=n/2;
				t=n-h;
			}
			else{
				t=n/2;
				h=n-t;
			}
			if(q==1)
				cout<<h<<endl;
			else
				cout<<t<<endl;
		}
	}
}
