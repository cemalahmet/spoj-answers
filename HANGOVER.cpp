#include <bits/stdc++.h>
using namespace std;

int main(){
	double d;
	cin >> d;
	while (d) {
		int a = 0;
		double da = 0;
		while (da < d) {
			da += 1.0 / (double)(a + 2);
			a++;
		}
		cout << a << " card(s)" << endl;
		cin >> d;
	}
}
