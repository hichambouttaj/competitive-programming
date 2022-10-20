#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	unsigned int n;

	while(cin>> n && n != 0){
		unsigned int sqrt_n = (int)sqrt(n);
		if(sqrt_n * sqrt_n == n){
			cout<< "yes"<< "\n";
		}else{
			cout<< "no"<< "\n";
		}
	}
	
	return 0;
}