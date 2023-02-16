#include <iostream>
#include <vector>

using namespace std;

void find(int& nP, int& start, int N, int nOP, int k, const vector<int>& p) {
	for (int i = N; i >= 1; i--) {
		for (int j = 0; j <= nOP - N; j++) {
			if (p[j + N - 1] - p[j] < k - 2) {
				nP = N;
				start = j;
				return;
			}
		}
	}
}

void solve() {
	int n, k;
	cin >> n >> k;
	int N = (k - 1) / 2;

	vector<int> a(n + 1), p;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int nOP = 0;

	for (int i = 1; i <= n - 2; i++) {
		if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
			p.push_back(i + 1);
			nOP++;
		}
	}

	int nP = 0, start = 0;
	find(nP, start, N, nOP, k, p);
}

int main() {
	int t;
	cin >> t;

	for (;t--;) {
		solve();
		cout << endl;
	}
}