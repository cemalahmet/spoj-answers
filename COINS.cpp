#include <bits/stdc++.h>

using namespace std;

long long int byteLandMemo(int x, map<long long int, long long int> &memory) {
	if (x == 0) return 0;
	if (x == 1) return 1;
	if (memory.find(x) == memory.end()) {
		long long int convert = byteLandMemo(x / 2, memory) + byteLandMemo(x / 3, memory) + byteLandMemo(x / 4, memory);
		long long int best = convert > x ? convert : x;
		memory.insert(pair<long long int, long long int>(x, best));
	}
	return memory.find(x)->second;
}


int main() {
	long long int n;
	map<long long int, long long int> memory;
	while(scanf("%lld",&n)!=EOF)
		cout << byteLandMemo(n, memory) << endl;
	
}
