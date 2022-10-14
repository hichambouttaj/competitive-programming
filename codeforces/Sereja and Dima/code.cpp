#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int n;
	cin>> n;
 
	vector<int> arr;
 
	int left = 0;
	int right = n -1;
	int c1 = 0, c2 = 0;
 
	while(n--){
		int x;
		cin>> x;
		arr.push_back(x);
	}
 
	bool isFirst = true;
 
	while(left <= right){
		if(arr[left] > arr[right]){
			if(isFirst){
				c1 += arr[left];
				isFirst =false;
			}else{
				c2 += arr[left];
				isFirst = true;
			}
			left++;
		}else{
			if(isFirst){
				c1 += arr[right];
				isFirst = false;
			}else{
				c2 += arr[right];
				isFirst = true;
			}
			right--;
		}
	}
 
 
	cout<< c1<< " "<< c2<< "\n";
 
 
	return 0;
}