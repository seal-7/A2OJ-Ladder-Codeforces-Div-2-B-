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
	int n,m;
	cin>>n>>m;
	map<string, string> mp;
	string str1,str2;
	for(int i=0; i< m; i++){
		cin>>str1;
		cin>>str2;
		mp.insert(make_pair(str1,str2));
	}
	string str;
	for(int i=0; i< n; i++){
		cin>>str;
		string s1=mp.find(str)->first;
		string s2=mp.find(str)->second;
		if(s1.length()<=s2.length()){
			cout<<s1<<" ";
		}
		else{

			cout<<s2<<" ";
		}
	}
	return 0;
}