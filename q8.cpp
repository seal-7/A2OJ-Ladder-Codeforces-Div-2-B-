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


bool isPrime(int val){
	if(val<=1)
		return false;
	else if(val==2)
		return true;
	else if (val==3)	
		return true;
	else if(!(val%2 && val%3))
		return false;			
		for(int i=5; i*i<=val ; i+=6){
			if(val%i && val%(i+2)==0)
				return false;
		}
	return true;
}
int main(){
	ll n,val;
	cin>>n;	
	while(n--){
		cin>>val;
		ll x=(sqrt(val)+1e-7);		
		if(x*x==val){
			if(isPrime(x))
			cout<<"YES\n";
		else
			cout<<"NO\n";	
		}
		else
			cout<<"NO\n";
	}
	return 0;
}