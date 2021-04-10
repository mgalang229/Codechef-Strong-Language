#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		string s;
		cin >> n >> k >> s;
		// create a 'checker' variable to if there are 'k' consecutive '*' in the string
		bool checker = false;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '*') {
				// increase the counter if the current character is '*'
				cnt++;
			} else {
				// otherwise, reset the counter to 0
				cnt = 0;
			}
			// check if the counter (number of consecutive '*') is equal to 'k'
			if (cnt == k) {
				// if it's true, then set the checker to true, and break the loop
				checker = true;
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}	
	return 0;
}
