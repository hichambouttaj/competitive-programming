#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin>> n;
 
	int cnt = 0;
	int p = 0;
 
	while(n--){
		int x;
		cin>> x;
		if(x > 0){
			p += x;
		}else if(p > 0 && x < 0){
			p--;
		}else{
			cnt++;
		}
	}
 
	cout<< cnt<< "\n";
 
	return 0;
}