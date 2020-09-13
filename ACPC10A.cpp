#include <bits/stdc++.h>

using namespace std;

void whatsNext(int a1, int a2, int a3) {
	if (a2 - a1 == a3 - a2) 
		cout << "AP " << a3 + a3 - a2 << endl;
	else 
		cout << "GP " << a3 * a3 / a2 << endl;
}

int main() {
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	while (a1 != 0 || a2 != 0 || a3 != 0) {
		whatsNext(a1, a2, a3);
		cin >> a1 >> a2 >> a3;
	}
}