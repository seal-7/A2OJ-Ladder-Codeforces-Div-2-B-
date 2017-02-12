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
	string str,str1;
	cin>>str>>str1;
	bool flag=false;
	if(str.length()==str1.length()){
		sort(str.begin(),str.end());
		sort(str1.begin(),str1.end());
		if(str==str1)
			cout<<"array\n";
		else
			cout<<"need tree\n";
	}
	else if(str.length()>str1.length()){
		int j=0;
		bool flag=false;
		for(int i=0; i< str.length(); i++){
			while(j<str1.length() and i<str.length() and str1[j]==str[i]){
                j++;
                i++;
			}
			if(j==str1.length()){
				flag=true;
				break;
			}			
		}
		if(flag)
			cout<<"automaton\n";
		else{
			sort(str.begin(),str.end());
			sort(str1.begin(),str1.end());
			int z=0;
			for(int i=0; i< str.length(); i++){
				if(str[i]==str1[z]){
					z++;
				}
			}
			if(z==str1.length())
				cout<<"both\n";
			else
				cout<<"need tree\n";

		}
	}
	else{
		 	cout<<"need tree\n";
	}
	return 0;
}	