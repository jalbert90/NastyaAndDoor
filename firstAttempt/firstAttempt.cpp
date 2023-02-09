#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n), p;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - k + 1; i++) {
		if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
			p.push_back(i);
		}
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
		cout << endl;
	}
}