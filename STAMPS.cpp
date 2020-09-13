#include <bits/stdc++.h>
using namespace std;

void test_case() {
	int s, f;
	cin >> s >> f;
	vector<int> arr(f);
	for (int &a : arr)
		cin >> a;
	sort(arr.rbegin(), arr.rend());
	int cnt = 0;
	for (int a : arr) {
		if (s <= 0) break;
		cnt++;
		s -= a;
	}
	if (s > 0) cout << "impossible" << endl;
	else cout << cnt << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	int i = 1;
	while (t--) {
		cout << "Scenario #" << i << ":\n";
		test_case();
		cout << endl;
		i++;
	}
}
