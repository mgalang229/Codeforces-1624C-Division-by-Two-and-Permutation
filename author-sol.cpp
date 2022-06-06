#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end(), [](const int& x, const int& y) {
				return x > y;
		});
		bool ok = true;
		vector<bool> used(n + 1, false);
		for (int i = 0; i < n; i++) {
			int x = a[i];
			while (x > n || used[x]) {
				x /= 2;
			}
			if (x > 0) {
				used[x] = true;
			} else {
				ok = false;
			}
		}
		cout << (ok ? "YES" : "NO") << '\n';
	}
	return 0;
}
