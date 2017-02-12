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
	cin>>str;	
	int n=str.length();	
	int val;
	bool flag=false;
	for(int i=0; i< n-1; i++){
		val=str[i]-'0';
		if(val%2==0 and str[i]<str[n-1]){
			flag=true;
			swap(str[i],str[n-1]);
			break;
		}
	}
	if(!flag){
		for(int i=n-2;i>=0;i--){
			val=str[i]-'0';
			if(val%2==0){
			flag=true;			
				swap(str[i],str[n-1]);
				break;
			}		
		}
	}
	if(!flag)
		cout<<-1;
	else
		cout<<str;
	return 0;
}