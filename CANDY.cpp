#include <bits/stdc++.h>

using namespace std;

int candy(vector<int> bags) {
	if (bags.empty()) return 0;
	int sum = 0;
	for (int num : bags) 
		sum += num;
	if (sum % bags.size() != 0) return -1;
	int avg = sum / bags.size();
	int moveCount = 0;
	for (int num : bags) 
		if (num > avg) moveCount += num - avg;
	return moveCount;
}

int main() {
	int n;
	cin >> n;
	while (n != -1) {
		vector<int> bags;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			bags.push_back(x);
		}
		cout << candy(bags) << endl;
		cin >> n;
	}	
}
