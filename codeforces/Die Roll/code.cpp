#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string die[7] = {"0/1", "1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
 
	int y, w;
	cin>> y>> w;
 
	int max = std::max(y, w);
 
	cout<< die[7 - max]<< "\n";
 
	return 0;
}