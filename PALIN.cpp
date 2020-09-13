#include <bits/stdc++.h>

using namespace std;

void increment(string &x) {
	for (int i = x.size()-1; i >= 0; i--) {
		if (x[i] != '9') {
			x[i]++;
			return;
		} else {
			x[i] = '0';
		}
	}
	x = "1" + x;
}

// ALGORITHM: iterate both from left and right.
// if left >= right: right = left.
// else (right - 1)++ and right = left
string nextPalindrome(string x) {	
	// add 1 to x
	increment(x);
	
	int n = x.size();
	int i = 0, j = n - 1;
	while (j > i) {
		if (x[i] >= x[j]) {
			x[j] = x[i];
		}
		
		else {
			if (i + 1 != j) {
				
				// 9 is in middle. example: 1239400
				if (i + 2 == j && x[j-1] == '9') {
					int nineIndex = j - 1;
					while (x[nineIndex] == '9') {
						x[nineIndex] = '0';
						nineIndex--;
					}
					x[nineIndex]++;
					if (nineIndex < i) { // need to change i if adding 1 to 9's overflew through middle point
						i = nineIndex; 
						j = n - 1 - i;
					}
					x[j] = x[i];
				}

				else {
					if (x[j-1] != '9') {
						x[j] = x[i]; 
						x[j-1]++;
					}
					else { // unfortunately, it is 9. example: 123999500
						int nineIndex = j - 1;
						while (x[nineIndex] == '9') {
							x[nineIndex] = '0';
							nineIndex--;
						}
						x[nineIndex]++;
						if (nineIndex < i) {
							i = nineIndex;
							j = n - 1 - i;
						}
						x[j] = x[i];
					}
					
				}
			}
			else {
				x[i]++;
				x[j] = x[i];
			}
		}
		j--;
		i++;
	}
	return x;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		cout << nextPalindrome(s) << endl;
	}
}
