#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,counter=1;
		cin>>n;
		ll car[n];
		for(ll i=0;i<n;i++){
			cin>>car[i];
		}
		for(ll i=0;i<n-1;i++){
			if(car[i]>=car[i+1])
				counter++;
			else
				car[i+1]=car[i];
		}
		cout<<counter<<endl;
	}
}
