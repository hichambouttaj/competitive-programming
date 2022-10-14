#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin>> n;
	int sz = n;
 
	int host[101];
	int guest[101];
 
	memset(host, 0, sizeof(host));
	memset(guest, 0, sizeof(guest));
 
	while(n--){
		int h,g;
		cin>> h>> g;
		host[h]++;
		guest[g]++;
	}
 
	int cnt = 0;
 
	for(int i = 1; i < 101; i++){
		if(guest[i] != 0 && host[i] != 0){
			cnt += guest[i] * host[i];	
		}
	}
 
	cout<< cnt<< "\n";
 
	return 0;
}