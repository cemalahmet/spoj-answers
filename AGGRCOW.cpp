#include <bits/stdc++.h>

using namespace std;

bool possible(const vector<long long int> &arr, long long int x, long long int c) {
	if (x == 0)
		return true;
		
	long long int n = arr.size();
	long long int lastIndex = 0;
	long long int cowsPlaced = 1;
	
	
	for (int i = 1; i < n; i++) {
		if (arr[i] - arr[lastIndex] >= x) {
			lastIndex = i;
			cowsPlaced++;
			if (cowsPlaced == c)
				return true;
		}
	}
	return false;
}
int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		long long int n, c;
		cin >> n >> c;

		vector<long long int> arr(n);
		for (long long int j = 0; j < n; j++) 
			cin >> arr[j];

		sort(arr.begin(), arr.end());

		long long int max = arr[n-1];

		long long int low = 0, high = max-1, mid;
		while (low < high) {
			mid = (low + high) / 2;
			if (possible(arr, mid, c))
				low  = mid + 1;
			else 
				high = mid;
		}
		cout << low - 1 << endl;
	}
}
