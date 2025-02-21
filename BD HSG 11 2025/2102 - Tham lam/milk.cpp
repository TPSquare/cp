#include <bits/stdc++.h>
using namespace std;
#define START(file) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define F first
#define S second
#define ll long long
ll n, m, x, y, i, t;
pair<ll, ll> a[5006];
signed main() {
    START("milk");
    cin >> n >> m;
    FOR(i, 0, m) {
        cin >> x >> y;
        a[i] = {x, y};
    }
    sort(a, a + m);
    for (i = 0; i < m && n > 0; i++)
        if (a[i].S <= n) {
            n -= a[i].S;
            t += a[i].F * a[i].S;
        } else {
            t += n * a[i].F;
            n = 0;
        }
    cout << t;
}

