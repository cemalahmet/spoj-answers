#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;
	while (n) {
		for (int i = 1; i * i <= n; i++) {
			if (n % i == 0) count++;
		}
		n--;
	}
	cout << count;
}
