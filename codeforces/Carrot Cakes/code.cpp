#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t, k, d;
	cin>> n>> t>> k>> d;

	int group = (n + k - 1) / k;

	int p1 = 0;
	int p2 = d;

	for(int i = 0; i < group; i++){
		if(p1 < p2){
			p1 += t;
		}else{
			p2 += t;
		}
	}

	if(max(p1, p2) < group * t){
		cout<< "YES"<< "\n";
	}else{
		cout<< "NO"<< "\n";
	}

	return 0;
}