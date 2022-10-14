#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s1, s2;
	cin>> s1>> s2;
 
	int sz = s1.length();
	string answer = "0";
 
	for(int i = 0; i < sz; i++){
		char c1 = toupper(s1[i]);
		char c2 = toupper(s2[i]);
		if((int)(c1 - c2) < 0){
			answer = "-1";
			break;		
		}
		if((int)(c1 - c2)> 0){
			answer = "1";
			break;
		}
	}
 
	cout<< answer<< "\n";
 
	return 0;
}