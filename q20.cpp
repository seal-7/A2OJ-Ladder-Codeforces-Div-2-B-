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
	string str;
	cin>>str;
	int count=0;
	int n=str.length();
	vector<int> vec(n+5);
	for(int i=0; i< n; i++){
		vec[str[i]-'a']++;		
	}
	for(int i=0; i< vec.size(); i++){
		if(vec[i]%2!=0)
			count++;
	}
	if((count-1)%2==0 or count==0){
		cout<<"First\n";
	}
	else{
		cout<<"Second\n";
	}
	return 0;
}