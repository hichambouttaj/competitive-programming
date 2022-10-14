#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int idx = 0;
 
	int num;
 
	while(true){
		cin>> num;
		if(num == 1){
			break;
		}
		idx++;
	}
 
	int i = floor(idx / 5) + 1;
	int j = idx % 5 + 1; 
 
	cout<< abs(i - 3) + abs(j - 3)<< "\n";
 
 
	return 0;
}