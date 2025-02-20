#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define db double
vector<int> l, r;
int n, x, y, i, k, res;
signed main() {
    START("find");
    cin >> n >> x >> y;
    l.push_back(x);
    r.push_back(y);
    FOR(k, 1, n) {
        cin >> x >> y;
        FOR(i, 0, l.size())
            if (!(x > r[i] || y < l[i])) {
                l[i] = min(l[i], x);
                r[i] = max(r[i], y);
                break;
            }
        if (i == l.size()) {
            l.push_back(x);
            r.push_back(y);
        }
    }
    FOR(i, 0, l.size()) res = max(res, r[i] - l[i]);
    cout << res;
}
