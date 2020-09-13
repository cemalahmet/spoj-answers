#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	while (x) {
		string s;
		cin >> s;
		int n = s.size();
		int row = n / x;
		for (int i = 0; i < x; i++) {
			int index = i;
			bool lToR = true;
			for (int j = 0; j < row; j ++) {
				cout << s[index];
				if (lToR) index += 2 * (x-i) - 1;
				else index += 2 * i + 1;
				lToR = !lToR;
			}
		}
		cout << endl;
		cin >> x;
	}
	return 0;
}
