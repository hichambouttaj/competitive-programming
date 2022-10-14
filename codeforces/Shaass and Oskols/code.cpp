#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin>> n;
 
	int arr[n];
	for(int i = 0; i < n; i++){
		int x;
		cin>> x;
		arr[i] = x;
	}
 
	int m;
	cin>> m;
	while(m--){
		int x, y;
		cin>> x>> y;
		int left = y-1;
		int right = arr[x-1] - y;
		arr[x - 1] = 0;
		if(x - 2 >= 0){
			arr[x-2] += left;
		}
		if(x <= n-1){
			arr[x] += right;  
		}
		
	}
 
	for(int i = 0; i < n; i++){
		cout<< arr[i]<< "\n";
	}
 
	return 0;
}