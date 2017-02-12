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
	int n,val1,val2;
	cin>>n;
	vector<int> v1;
	vector<int> v2;
	vector<int> home;
	vector<int> away;
	vector<int> freq(100005);
	for(int i=0; i< n; i++){
		cin>>val1>>val2;
		v1.push_back(val1);
		freq[val1]++;
		v2.push_back(val2);
		home.push_back(n-1);
		away.push_back(n-1);
	}
	for(int i=0; i< n; i++){
		home[i]+=freq[v2[i]];
		away[i]-=freq[v2[i]];
	}

	for(int i=0; i< n; i++){
		cout<<home[i]<<" "<<away[i]<<endl;
	}
	return 0;
}