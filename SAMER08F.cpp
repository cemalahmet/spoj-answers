#include <bits/stdc++.h>

using namespace std;

long long int feynman(int N) {
	if (N <= 0) return 0;
	long long int sum = 0;
	for (int i = 1; i <= N; i++) 
		sum += i * i;
	return sum;
}

int main() {
	int x;
	cin >> x;
	while (x != 0) {
		cout << feynman(x) << endl;
		cin >> x;
	}
}
