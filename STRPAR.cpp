#include <bits/stdc++.h>
using namespace std;

int n;

void top() {
	stack<int> s1, s2;
	s1.push(0);
	s2.push(n+1);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		
		if (a == s1.top() + 1)
			s1.push(a);
		else
			s2.push(a);
		while (!s2.empty() && s2.top() == s1.top() + 1) {
				s1.push(s2.top());
				s2.pop();
		}
		
	}
	cout << (s2.empty() ? "yes" : "no") << endl;
	
	
	
}

int main() {
	cin >> n;
	while (n) {
		top();
		cin >> n;
	}
	
}
