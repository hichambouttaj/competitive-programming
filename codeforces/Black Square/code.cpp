#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int cal[4];
	for(int i = 0; i < 4; i++){
		cin>> cal[i];
	}
 
	string s;
	cin>> s;
	int cnt = 0;
 
	for(int i = 0; i < s.length(); i++){
		cnt += cal[s[i] - 49];
	}
 
	cout<< cnt<< "\n";
 
	return 0;
}