#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	map<string,int>f;
	for(int i=0;i+k<=s.size();i++){	
		string sub=s.substr(i,k);
		f[sub]++;
	}
	int mx=0;
	for(auto u:f){
		mx=max(mx,u.second);
		
	}
	cout<<mx<<endl;
	for(auto u:f){
		if(mx==u.second){
			cout<<u.first<<" ";
		}
		
	}
}