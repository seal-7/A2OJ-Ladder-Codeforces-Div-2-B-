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
	string str;
	int k,val;
	vector<int> vec;
	cin>>str;
	cin>>k;
	for(int i=0; i< 26; i++){
		cin>>val;
		vec.push_back(val);
	}
	 int pos=distance(vec.begin(),max_element(vec.begin(),vec.end()));
	 char x='a'+pos;

	for(int i=0; i< k; i++){
		str+=x;
	}
	//cout<<str;
	int sum=0;
	for(int i=1; i<=str.length(); i++){
		sum+=(i*vec[str[i-1]-'a']);
	}
	cout<<sum<<endl;
	return 0;
}