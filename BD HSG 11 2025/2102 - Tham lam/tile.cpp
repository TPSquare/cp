#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define F first
#define S second
#define ll long long

int i, n, a[106];
signed main() {
    START("tile");
    cin >> n;
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
    cout << min(a[n - 1] + 1, n);
}

