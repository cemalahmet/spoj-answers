#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x) {
	if (x <= 1) return false;
	if (x == 2) return true;
	if (!(x % 2)) return false;
	for (int i = 3; i * i <= x; i += 2) 
		if (!(x % i)) return false;
	return true;
}

void printPrimes(int a, int b) {
	for (int i = a; i <= b; i++) {
		if (isPrime(i))
			cout << i << endl;
	}
}


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		printPrimes(a, b);
		cout << endl;
	}
}
