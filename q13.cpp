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
#define modulo(a, b) (a%b<0 ? a%b+b : a%b)
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 

int main(){
	ll x,y,n;
	cin>>x>>y;
	cin>>n;
	vector<ll> vec;	
	if(n==1){	
		cout<<modulo(x,1000000007)<<endl;
	}
	else if(n==2){		
		cout<<modulo(y,1000000007)<<endl;
	}
	else{
		int temp=0;
		for(int i=0; i< 6; i++){
			temp=y-x;
			vec.push_back(temp);
			x=y;
			y=temp;
		}		
		cout<<modulo(vec[((n-1)+4)%6],1000000007)<<endl;
	}
	return 0;
}