#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int j = 0; j < t; j++) {
		long long int n, x, sum = 0;
		cin >> n;
		for (long long int i = 0; i < n; i++) {
			cin >> x;
			sum = (sum % n + x % n) % n;
		}
		if (sum == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
