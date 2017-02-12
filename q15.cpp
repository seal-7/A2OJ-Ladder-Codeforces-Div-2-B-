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
	int n,s,t,val,count=0;
	bool flag=false;
	cin>>n>>s>>t;
	vector<int> vec(n+1);
	for(int i=1; i<=n; i++){
		cin>>vec[i];
	}
	// for(int i=1; i<=n; i++){
	// 	cout<<vec[i]<<" ";
	// 	if(i%20==0)
	// 	cout<<endl;		
	// }
	if(s==t){
		cout<<count<<endl;
	}
	else{
		int i=s;
		while(count<n){
			count++;
			if(vec[i]==t){
				flag=true;
				break;				
			}
			else{
				i=vec[i];
			}			
		}

		if(flag)			
				cout<<count<<endl;			
		else
			cout<<-1<<endl;
	}
	return 0;
}