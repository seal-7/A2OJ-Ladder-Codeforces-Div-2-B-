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

int countOnes(int val){
	int count=0;
	while(val){
		if(val&1==1){
			count++;			
		}
		val=val>>1;
	}
	return count;
}
int main(){
	int n,m,k,input;
	vector<int> vec;
	cin>>n>>m>>k;
	for(int i=0; i< m+1; i++){
		cin>>input;
		vec.push_back(input);
	}
	int val=0,fedor=vec[m],count=0;
	for(int i=0; i< m; i++){
		val=countOnes(fedor^vec[i]);
		if(val<=k){
			count++;

		}
	}
	cout<<count<<endl;
	return 0;
}