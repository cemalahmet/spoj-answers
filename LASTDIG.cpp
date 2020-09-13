#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for (int _ = 0; _ < n; _++) {
		int a, b;
		cin >> a >> b;

		if (a == 0) {
			cout << 0 << endl;
			continue;
		}
		if (b == 0) {
			cout << 1 << endl;
			continue;
		}
		if (b == 1) {
			cout << a << endl;
			continue;
		}
		
		vector<int> pattern;
		pattern.emplace_back(a % 10);
		int i = 1;
		while (i <= b) {
			int toBeAdded = (pattern[pattern.size()-1] * a) % 10;
			if (toBeAdded == pattern[0])
				break;
			pattern.emplace_back(toBeAdded);
			i++;
		}
		int pow = (b - 1) % pattern.size();
	
		cout << pattern[pow] << endl;
	}
}
