#include <bits/stdc++.h>
using namespace std;
#define $(f) ios::sync_with_stdio(false); cin.tie(nullptr); freopen(f".inp", "r", stdin); freopen(f".out", "w", stdout)
#define FOR(i, a, b) for (i = a; i < b; i++)
#define FORs(i, a, b) for (i = a; i <= b; i++)
#define ll long long
ll n, k, i, c, x, t, m, v = LONG_LONG_MAX, a[15006];
vector<ll> b;
int main() {
    $("zxy");
    cin >> n >> k;
    FOR(i, 0, n) {
        cin >> a[i];
        t += a[i];
        if (a[i] > m) m = a[i];
    }
    m = max(m, t / n + (t % n != 0 ? 1 : 0));
    while (b.empty() || b.size() > k) {
        ++m;
        b.clear();
        b.push_back(0);
        c = 0;
        FOR(i, 0, n)
            if (b[c] + a[i] <= m) b[c] += a[i];
            else {
                b.push_back(a[i]);
                c++;
            }
    }
    cout << m;
}
