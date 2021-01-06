#include<bits/stdc++.h>
using namespace std;
#define BOOST    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main(){
	BOOST;
	int t;
	cin>>t;
	while(t--){
		bool flag=1;
		string str;
		int freq1[123]={0},freq2[123]={0};
		cin>>str;
		int s=str.size();
		int half=s/2;
		if(s%2==0){
			for(int i=0;i<s;i++){
				if(i<half){
					freq1[str[i]]++;
				}
				else{
					freq2[str[i]]++;
				}	
			}	
		}
		else{
			for(int i=0;i<s;i++){
				if(i<half){
					freq1[str[i]]++;
				}
				else if(i>half){
					freq2[str[i]]++;
				}	
			}
		}
		for(int i=97;i<=122;i++){
			if(freq1[i]!=freq2[i]){
				flag=0;
			}
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
