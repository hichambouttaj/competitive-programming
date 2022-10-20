#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<char> arr;

	char x;

	while(cin>> x){
		if(x >= 'a' && x <= 'z'){
			arr.insert(x);
		}
	}

	cout<< arr.size()<< "\n";

	return 0;
}