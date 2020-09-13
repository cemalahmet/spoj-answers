#include <bits/stdc++.h>

using namespace std;

int numSteps(int x, int y) {
	if (x == 0 && y == 0) return 0;
	else if (x == 1 && y == 1) return 1;
	else if (x % 2 == 0) {
		if (y == x)          return 2 * x;
		else if (y == x - 2) return 2 * (x - 1);
	}
	else {
		if (y == x) return 2 * x - 1;
		else if (y == x - 2) return 2 * x - 3;
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0 ;i < n; i++) {
		int x, y;
		cin >> x >> y;
		int steps = numSteps(x, y);
		if (steps == -1) 
			cout << "No Number" << endl;
		else
			cout << steps << endl;
	}
}
