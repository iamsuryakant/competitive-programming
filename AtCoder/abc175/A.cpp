#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("trapv")
#pragma GCC target("sse4")

#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " is " << x << "\n"
#define int long long
#define mod 1000000007
#define PI acos(-1)

void solve() {
	string s;
	cin >> s;
	int ans = 0;
	if(s[0] == 'R' && s[1] == 'R' && s[2] == 'R') {
		cout << 3;
	} else if((s[0] == 'R' && s[1] == 'R') || (s[1] == 'R' && s[2] == 'R')) {
		cout << 2;
	} else if(s[0] == 'R' || s[1] == 'R' || s[2] == 'R') {
		cout << 1;
	} else {
		cout << 0;
	}
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int tc = 1;
	// cin >> tc;
	while(tc--) {
	    solve();
	}
	return 0;
}
