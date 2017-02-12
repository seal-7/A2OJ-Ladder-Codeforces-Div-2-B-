/*
 ____    _____      _      _               _____ 
/ ___|  | ____|    / \    | |             |___  |
\___ \  |  _|     / _ \   | |      _____     / / 
 ___) | | |___   / ___ \  | |___  |_____|   / /  
|____/  |_____| /_/   \_\ |_____|          /_/   
*/

#include <bits/stdc++.h>
#include <iomanip>
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
	int n;
	double val;
	
	vector<double> vec;
	double l;
	cin>>n>>l;

	for(int i=0;i<n;i++){
		cin>>val;
		vec.push_back(val);
	}
	sort(vec.begin(),vec.end());
	
	double x=vec[0];
	int i;
	for(i=0;i<vec.size()-1;i++){
		
		if(vec[i]+(2.0*x)<vec[i+1]){
			x=(vec[i+1]-vec[i])/2.0;
		}

	}
	if(vec[i]+x<=l){
		x=(l-vec[i]);
	}
	cout<<setprecision(10)<<fixed<<x<<endl;
	return 0;
}