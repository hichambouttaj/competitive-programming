#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string s;
	cin>> s;
 
	char pointer = 'a';
	int cnt = 0;
 
	for(int i = 0; i < s.length(); i++){
		int x = abs(pointer - s[i]);
		if(x < 13){
			cnt += x;
		}else{
			cnt += 26 - x;
		}
		pointer = s[i];
	}
 
	cout<< cnt<< "\n";
 
	return 0;
}