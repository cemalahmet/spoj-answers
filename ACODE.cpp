#include <bits/stdc++.h>

using namespace std;

bool atMostTwentySix(char c1, char c0) {
	if (c1 == '0') return false;
	if (c1 < '2') return true;
	if (c1 > '2') return false;
	if (c0 <= '6') return true;
	return false; 
}

long long int differentEncoding(string s) {
	if (s.size() == 0) return 0;
	if (s.size() == 1) return s != "0";

	int n = s.size();
	long long int x, y, temp;

	x = s[n-1] == '0' ? 0 : 1;
	y = atMostTwentySix(s[n-2], s[n-1]) ? x + 1 : x;

	for (int i = n - 3; i >= 0; i--) {
		temp = y;
		if (atMostTwentySix(s[i], s[i+1])) {
			if (s[i + 1] == '0')
				y = x;
			else if (s[i+2] != '0')
				y = y + x;
		}
		else {
			if (s[i+1] == '0') return 0;
		}
		x = temp;
	}
	return y;
}

int main() {
	string s;
	cin >> s;
	while (s != "0") {
		cout << differentEncoding(s) << endl;
		cin >> s;
	}
	return 0;
}
