#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s, t;
	cin>> s>> t;
 
	int sz = t.length();
	int len = s.length();
	int idx = 0;
	int i = 0;
 
	while(idx < sz && i < len){
		if(s[i] == t[idx]){
			i++;
		}
		idx++;
	}
 
	cout<< i + 1<< "\n";
 
 
	return 0;
}