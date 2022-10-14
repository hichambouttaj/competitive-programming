#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int k, r;
	cin>> k>> r;
 
	int cnt = 0;
 
	while(true){
		cnt++;
		if((k * cnt - r)  % 10 == 0){
			break;
		}
 
		if(k * cnt % 10 == 0){
			break;
		}
 
	}
 
	cout<< cnt<< "\n";
 
	return 0;
}