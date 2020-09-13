#include <bits/stdc++.h>
using namespace std;

void top() {
	int k;
	cin >> k;
	vector<pair<int, int>> arr;
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		arr.emplace_back(make_pair(a, b));
	}
	int startingTime = 0, cnt = 0;
	while (!arr.empty()) {
		int imin = 0, min = INT_MAX;
		for (int i = 0; i < (int)arr.size(); i++) {
			pair<int, int> p = arr[i];
			if (p.second < min) {
				imin = i;
				min = p.second;
			}
		}
		startingTime = arr[imin].second;
		for (int i = 0; i < (int)arr.size(); i++) {
			pair<int, int> p = arr[i];
			if (p.first < startingTime) {
				arr.erase(arr.begin()+i);
				i--;
			}
		}
		
		cnt++;
	}
	cout << cnt << endl;	
}




int main() {
	int n;
	cin >> n;
	while (n--) top();
}
