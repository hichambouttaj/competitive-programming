#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	string str;
 
	int cnt = 0;
 
	cin>> n>> str;
 
	for(char c : str){
		if(c == 'A'){
			cnt++;
		}
	}
 
 	cout<< (cnt == n - cnt ? "Friendship" : ((cnt > n - cnt) ?  "Anton" : "Danik"))<< "\n";
 
 
	return 0;
}