#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin>> n;
 
	int cnt = 0;
 
	while(n--){
		int nbr = 0;
		for(int i = 0; i <3; i++){
			int v;
			cin>> v;
			if(v == 1){
				nbr++;
			}
		}
		if(nbr >= 2){
			cnt++;
		}
	}
 
	cout<< cnt<< "\n";
 
	return 0;
}