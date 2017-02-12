/*
 ____    _____      _      _               _____ 
/ ___|  | ____|    / \    | |             |___  |
\___ \  |  _|     / _ \   | |      _____     / / 
 ___) | | |___   / ___ \  | |___  |_____|   / /  
|____/  |_____| /_/   \_\ |_____|          /_/   
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

int main(){
	ll n,m;
	cin>>n>>m;
	vector<int> vec(m);
	for(int i=0;i<m;i++){
		cin>>vec[i];
	}
	ll x=1,sum=0;
	for(int i=0;i<m;i++){
		if(vec[i]<x){
			sum+=(n-x+vec[i]);
			x=vec[i];
		}
		else{
			x=vec[i]-x;
			sum+=x;
			x=vec[i];
		}
	}
	cout<<sum<<endl;
	return 0;
}