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
 	int n,val;
 	cin>>n;
 	vector<int> vec;
 	for(int i=0; i< n; i++){
 			cin>>val;
 			vec.push_back(val);
 		}	
 	int cost=vec[0]+1;
 	for(int i=0; i< n-1; i++){
 		if(vec[i]==vec[i+1]){
 			cost+=2;
 		}
 		else if(vec[i]<vec[i+1]){
 			cost+=(2+vec[i+1]-vec[i]);
 		}
 		else{
 			cost+=(2+vec[i]-vec[i+1]);
 		}
 	}
 	cout<<cost<<endl;
	return 0;
}