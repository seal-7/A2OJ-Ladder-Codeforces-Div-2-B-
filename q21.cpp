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
#define modulo(a, b) (a%b<0 ? a%b+b : a%b)

int main(){
	int n,m,val;
	cin>>n>>m;
	if(m==0){
		cout<<"YES\n";
		return 0;
	}

	vector<int> v;
	for(int i=0; i<m; i++){
		cin>>val;
		v.push_back(val);
	}
	sort(v.begin(),v.end());
	int count=0;
	for(int i=0; i< m-1; i++){
		if(v[i+1]-v[i]==1){
			count++;			
		}
		else
			count=0;
		if(count==2)
			break;		
	}
	if(count==2 or v[0]==1 or v[m-1]==n)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}