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
	int n,val,pos1=0;
	bool flag1=false,flag2=false;
	cin>>n;
	int pos2=n-1;
	vector<int> v;
	for(int i=0; i< n; i++){
		cin>>val;
		v.push_back(val);		
	}
	vector<int> v1;
	v1.assign(v.begin(),v.end());
	reverse(v1.begin(),v1.end());
	if(is_sorted(v.begin(),v.end())){
		cout<<"yes\n";
		cout<<"1 1"<<endl;
	}
	else if(is_sorted(v1.begin(),v1.end())){
		cout<<"yes\n";		
		cout<<1<<" "<<n<<endl;
	}
	else{
		for(int i=0; i< n-1; i++){
			if (!flag1 && v[i]>v[i+1])
			{
				pos1=i;
				//cout<<pos1<<" ";
				flag1=true;
			}
			if(flag1 && v[i]<v[i+1]){
				pos2=i;
				//cout<<pos2<<" \n";
				flag2=true;
			}
			if(flag2&&flag1){
				break;
			}
		}
		reverse(v.begin()+pos1,v.begin()+pos2+1);
		// for(int i=0; i< n; i++){
		// 	cout<<v[i]<<' ';
		// }
		if(is_sorted(v.begin(),v.end())){
			cout<<"yes\n";
			cout<<pos1+1<<" "<<pos2+1<<endl;
		}
		else{
			cout<<"no\n";
		}

	}	
	return 0;
}