#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k;
		cin >> k;
		int ans = 0;
		// keep dividing k by 2 (if it's divisible)
		while (k % 2 == 0) {
			k /= 2;
			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
