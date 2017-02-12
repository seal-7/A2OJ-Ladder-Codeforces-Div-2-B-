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
	int n,val,m;
	cin>>n>>m;
	vector<int> vec;
	for(int i=0; i< n; i++){
		cin>>val;
		vec.push_back(val);
	}
	int p1=0,p2=0,count=0,sum=0;
	vector<int> vec1;
	while(p2<n){
		sum+=vec[p2];
		if(sum<=m){			
			count++;
			p2++;
			if(p2==n)
			vec1.push_back(count);	
		}
		else{			
			vec1.push_back(count);
			count--;
			sum-=vec[p1];
			sum-=vec[p2];
			p1++;
		}
	}
	cout<<*max_element(vec1.begin(),vec1.end())<<endl;
	return 0;
}