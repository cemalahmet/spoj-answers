#include <bits/stdc++.h>

using namespace std;

int Z(int x) {
	int zeroes = 0;
	while (x > 0) {
		x = x / 5;
		zeroes += x;
	}
	zeroes += x;
	
	return zeroes;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cout << Z(x) << endl;
	}
	return 0;