#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define F first
#define S second
int n, s, i, a[106];
signed main() {
    START("homework");
    cin >> n >> s;
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n);
    i = 0;
    while (s >= a[i] && i < n) s += a[i++];
    cout << i;
}
