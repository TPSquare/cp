#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define F first
#define S second
int n, i, x, y, s;
pair<int, int> a[1006];
signed main() {
    START("dragon");
    cin >> s >> n;
    FOR(i, 0, n) {
        cin >> x >> y;
        a[i] = {x, y};
    }
    sort(a, a + n);
    FOR(i, 0, n)
        if (s > a[i].F) s += a[i].S;
        else break;
    if (i == n) cout << "YES";
    else cout << "NO\n" << (n - i);
}
