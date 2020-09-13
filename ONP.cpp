#include <bits/stdc++.h>

using namespace std;

string transform(string expression) {
	map<char, int> priorities =  {{'+', 0}, {'-', 1}, {'*', 2},
							      {'/', 3}, {'^', 4}};
	stack<char> s;
	string result;
	
	for (char c : expression) {
		if (c >= 'a' && c <= 'z')
			result.push_back(c);

		else if (c == '(')
			s.push('(');
			
		else if (c == ')') {
			while (s.top() != '(') {
				result.push_back(s.top());
				s.pop();
			}
			s.pop();
			
		}
		else {    // operator
			int p1 = priorities.find(c)->second, p2;
			while (!s.empty() && s.top() != '(')
			 {
				char d = s.top();
				p2 = priorities.find(d)->second;
				if (p1 > p2) {
					break;
				} else {
					result.push_back(d);
					s.pop();
				}
			}
			s.push(c);
		}
	}

	while (!s.empty()) {
		result.push_back(s.top());
		s.pop();
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		cout << transform(s) << endl;
	}
	return 0;
}
