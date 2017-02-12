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
	int n,val;
	bool flag=false;
	cin>>n;
	vector<int> vec;
	for(int i=0; i< n; i++){
		cin>>val;
		vec.push_back(val);
	}
	vector<int> v;
	int i=0;
	if (is_sorted(vec.begin(),vec.end()))
	{
		cout<<0<<endl;
	}
	else{
		int pos=-1;
		bool flag=false;
		vector<int> vec1;
		while(true){
			i=(i+1)%n;
			if(flag and i==pos)
				break;
			if(!flag and vec[i]<vec[i-1]){
				pos=i;
				flag=true;
			}
			if(flag){
				vec1.push_back(vec[i]);				
			}
		}
		if(is_sorted(vec1.begin(),vec1.end())){
			cout<<n-pos<<endl;
		}	
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}