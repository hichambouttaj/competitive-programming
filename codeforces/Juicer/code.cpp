#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, b, d;
	cin>> n>> b>> d;

	int cnt = 0;
	int sum = 0;

	while(n--){
		int x;
		cin>> x;
		if(x > b){
			continue;
		}
		sum += x;
		if(sum > d){
			sum = 0;
			cnt++;
		}
	}

	cout<< cnt<< "\n";

	return 0;
}