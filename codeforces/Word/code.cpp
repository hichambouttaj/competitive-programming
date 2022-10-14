#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s;
	cin>> s;
 
	int sz = (int)s.length();
	int cnt = 0;
 
	for(int i = 0; i < sz; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			cnt++;
		}
	}
 
	if((sz - cnt) >= cnt){
		for(int i = 0; i < sz; i++){
			s[i] = tolower(s[i]);
		}
	}else if(sz - cnt < cnt){
		for(int i = 0; i < sz; i++){
			s[i] = toupper(s[i]);
		}
	}
 
	cout<< s<< "\n";
 
 
	return 0;
}