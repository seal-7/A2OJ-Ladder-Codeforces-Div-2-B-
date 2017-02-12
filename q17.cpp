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
	int a[3][3];
	for(int i=0; i< 3; i++){
		for(int j=0; j< 3; j++){
			cin>>a[i][j];
		}
	}
	int y=(((2*(a[2][0]+a[0][2])+a[2][1]+a[0][1])/2)-a[1][0]-a[1][2]);
	int x=y+a[1][0]+a[1][2]-a[0][1]-a[0][2];
	int z=a[2][0]+a[0][2]-x;
	a[0][0]=x;
	a[1][1]=y;
	a[2][2]=z;
	for(int i=0; i< 3; i++){
		for(int j=0; j< 3; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}