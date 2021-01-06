#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
	boost;
	ll t;
	cin>>t;
	while(t--){
		ll n,laddu=0;
		cin>>n;
		string origin;
		cin>>origin;
		for(ll i=0;i<n;i++){
			string activity;
			cin>>activity;
			if(activity=="CONTEST_WON"){
				laddu+=300;
				ll rank;
				cin>>rank;
				if(rank<=20){
					laddu+=20-rank;
				}	
			}
			else if(activity=="TOP_CONTRIBUTOR")
				laddu+=300;
			else if(activity=="BUG_FOUND"){
				ll bugs;
				cin>>bugs;
				laddu+=bugs;
			}
			else if(activity=="CONTEST_HOSTED"){
				laddu+=50;
			}	
		}
		if(origin=="INDIAN"){
			laddu/=200;
		}
		else
			laddu/=400;		
		cout<<laddu<<endl;
	}
	
}
