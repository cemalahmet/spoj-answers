#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	long long int t;
	cin >> t;

	// this is finite if and only if n is a power of two
	
	for (int i = 1; i < 63; i++) {
		if (t == 1LL << i)	{
			cout << "TAK" << endl;
			return 0; 
		}
	}
	cout << "NIE" << endl;
}
