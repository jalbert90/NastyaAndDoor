#include <iostream>
#include <vector>

using namespace std;

struct pSum {
	int index, sum;
};

void solve() {
	int n, k;
	cin >> n >> k;

	vector<int> a(n + 1);
	vector<int> pS(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= (n - 2); i++) {
		if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
			pS[i + 1] = pS[i] + 1;
		}
	}

	bool found = false;
	int mp = (k - 1) / 2;

	while (!found) {
		for (int i = 1; i <= (n - k + 1); i++) {
			if (pS[i + k - 2] - pS[i] == mp) {
				found = true;
				break;
			}
			else {
				mp--;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}