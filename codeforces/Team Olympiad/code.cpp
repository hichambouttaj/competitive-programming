#include <bits/stdc++.h>

using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin>> n;
	vector<vector<int>> arr(4);

	int freq[4] = {0, 0, 0, 0};

	for(int i = 0; i < n; i++){
		int t;
		cin>> t;
		freq[t]++;
		arr[--t].push_back(i+1);
	}

	int w = freq[1];

	for(int i = 1; i <= 3; i++){
		w = min(w, freq[i]);
	}

	cout<< w<< "\n";

	for(int col = 0; col < w; col++){
		for(int row = 0; row < 3; row++){
			cout<< arr[row][col]<< " ";
		}
		cout<< "\n";
	}


	return 0;
}