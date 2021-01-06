#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
	boost;
	ll t;
	cin>>t;
	while(t--){
		ll n,counter=0;
		cin>>n;
		while(n){
			counter+=n/5;
			n/=5;
		}
		cout<<counter<<endl;	
	}
}
