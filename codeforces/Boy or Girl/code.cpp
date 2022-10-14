#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s;
	cin>> s;
	
	int sz = s.length();
	set<char> arr;
 
	for(int i = 0; i < sz; i++){
		arr.insert(s[i]);
	}
 
	if((int)arr.size() % 2 == 0){
		cout<< "CHAT WITH HER!"<< "\n";
	}else{
		cout<< "IGNORE HIM!"<< "\n";
	}
 
	return 0;
}