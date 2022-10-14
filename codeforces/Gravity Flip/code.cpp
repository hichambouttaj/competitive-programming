#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin>> n;
	vector<int> arr;
	while(n--){
		int v;
		cin>> v;
		arr.push_back(v);
	}
 
	sort(arr.begin(), arr.end());
 
	for(int i = 0; i < (int)arr.size(); i++){
		cout<< arr[i]<< " ";
	}
 
	return 0;
}