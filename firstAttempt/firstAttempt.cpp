#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n), p;
	vector<pair<int, int>> maxPeaks;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 2; i++) {
		if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
			p.push_back(i);
		}
	}

	for (int i = 0; i < n - k + 1; i++) {
		int count = 0;
		for (auto el : p) {
			if (el > i && el < (i + k - 1)) {
				count++;
			}
		}
		pair<int, int> temp = make_pair(count, i);
		maxPeaks.push_back(temp);
	}

	auto maxIt = max_element(maxPeaks.begin(), maxPeaks.end(), [](pair<int, int>& A, pair<int, int>& B) {return A.first < B.first; });

	cout << maxIt->first + 1 << " " << maxIt->second + 1;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
		cout << endl;
	}
}