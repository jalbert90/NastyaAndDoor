#include <iostream>
#include <vector>

using namespace std;

void solve();

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n);

	for (auto& el : a) cin >> el;
}