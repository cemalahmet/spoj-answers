#include <bits/stdc++.h>

using namespace std;


long int reverse(long int x) {
	long int reversedX = 0;
	while (x > 0) {
		reversedX = reversedX * 10 + x % 10;
		x = x / 10;
	}
	return reversedX;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		cout << reverse(reverse(x) + reverse(y)) << endl;
	}
}
