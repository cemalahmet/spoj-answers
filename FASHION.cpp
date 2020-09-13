#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	for (int i = 0; i < x; i++) {
		int n;
		cin >> n;
		vector<int> men, women;
		for (int j = 0; j < n; j++) {
			int h;
			cin >> h;
			men.push_back(h);
		}
		for (int j = 0; j < n; j++) {
			int h;
			cin >> h;
			women.push_back(h);
		}
		sort(men.begin(), men.end());
		sort(women.begin(), women.end());
		int sum = 0;
		for (int j = 0; j < n; j++) 
			sum += men[j] * women[j]; 
		
		
		cout << sum << endl;
	}
}
