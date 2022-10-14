#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin>> n;
 
	string tmp;
	bool isFirst = true;
 
	int cnt = 0;
 
	while(n--){
		string s;
		cin>> s;
 
		if(isFirst){
			tmp = s;
			isFirst = false;
			continue;
		}
 
		if(s != tmp){
			cnt++;
		}
		tmp = s;
 
	}
 
	cout<< cnt + 1<< "\n";
 
	return 0;
}